//
//  q4.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef q4_hpp
#define q4_hpp

#include <iostream>
#include <string>
using namespace std;
class String{
    char str[225];
    int len;
    friend String operator+(const String a, const String b);
public:
    void show(){
        cout<<str<<"'s length is "<<len<<endl;
    }
    String(const String &ap)
    {
        len=ap.len;
        strcpy(str,ap.str);
    }
    String(char *ap)
    {
        strcpy(str,ap);
        len=strlen(str);
    }
};

String operator+(const String a, const String b)
{
    String sum(a);
    strcat(sum.str,b.str);
    sum.len=strlen(sum.str);
    return sum;
}

#endif /* q4_hpp */
