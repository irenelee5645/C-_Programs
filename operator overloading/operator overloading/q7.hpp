//
//  q7.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef q7_hpp
#define q7_hpp

#include <iostream>
using namespace std;
class Num
{
    int su;
    friend bool operator==(const Num a, const Num b);
    friend bool operator!=(const Num a, const Num b);
    friend ostream & operator<<(ostream &os, const Num &a);
public:
    Num(int a=0):su(a){};
    
};
bool operator==(const Num a, const Num b)
{
    return (a.su==b.su?true:false);
}

bool operator!=(const Num a, const Num b)
{    return (a.su!=b.su?true:false);}



ostream & operator<<(ostream &os, const Num &a)
{
    os<<a.su;
    return os;
}
#endif /* q7_hpp */
