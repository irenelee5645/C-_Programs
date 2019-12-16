//
//  q6.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef q6_hpp
#define q6_hpp

#include <iostream>
#include <string>
using namespace std;
class String{
    char str[225];
    int num;
    friend String operator+(const String a, const String b);
public:
    void show(){
        cout<<str<<" has "<<num<<" dollars "<<endl;
    }
    String(const String &ap)
    {
        num=ap.num;
        strcpy(str,ap.str);
    }
    String(char *ap, int a)
    {
        strcpy(str,ap);
        num=a;
    }
    void operator=(String &b)
    {
        String temp(str,num);
        strcpy(str,b.str);
        strcpy(b.str,temp.str);
        num=b.num;
        b.num=temp.num;
    }
};

String operator+(const String a, const String b)
{
    String sum(a);
    strcat(sum.str,b.str);
    sum.num+=b.num;
    return sum;
}

#endif /* q6_hpp */
