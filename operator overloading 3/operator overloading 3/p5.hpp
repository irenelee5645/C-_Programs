//
//  p5.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/9/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p5_hpp
#define p5_hpp

#include <iostream>
using namespace std;

class Fraction{
    int a;
    int b;
public:
    Fraction(int c, int d):a(c), b(d){};
    Fraction(){};
    Fraction& operator=(Fraction &c){
        this->a=c.a;
        this->b=c.b;
        return *this;
    }
    Fraction& operator+(Fraction &c)
    {
        int denom, numer;
        denom=(this->b)*(c.b);
        numer=(this->a)*(c.b)+(this->b)*(c.a);
        for(int cc=20; cc>0;cc--)
        {
            if(denom%cc==0 &&numer%cc==0)
            {
                denom/=cc;
                numer/=cc;
            }
        }
        Fraction temp;
        temp.a=numer;
        temp.b=denom;
        return temp;
    }
    friend ostream& operator<<(ostream &os, Fraction &c);
};

ostream& operator<<(ostream &os, Fraction &c)
{
    os<<c.a <<" / "<<c.b;
    return os;
}

#endif /* p5_hpp */
