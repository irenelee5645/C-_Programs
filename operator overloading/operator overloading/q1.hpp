//
//  q1.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef q1_hpp
#define q1_hpp

#include <iostream>
using namespace std;

class Num{
    int su;
public:
    Num(int a=0):su(a){}
    int operator+(Num a)
    {
        Num sum;
        sum.su=su+a.su;
        return sum.su;
    }
    int operator-(Num a)
    {
        Num sum;
        sum.su=su-a.su;
        return sum.su;
    }
    int operator*(Num &a)
    {
        Num sum;
        sum.su=su*a.su;
        return sum.su;
    }
   int operator/(Num a)
    {
        Num sum(1);
        sum.su=su/a.su;
        return sum.su;
    }
    void show()
    {
        cout<<"data  : "<<su<<endl;
    }

};

#endif /* q1_hpp */
