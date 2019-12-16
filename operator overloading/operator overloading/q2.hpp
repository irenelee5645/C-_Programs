//
//  q2.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef q2_hpp
#define q2_hpp

#include <iostream>
using namespace std;


class Num{
    int su;
    friend Num operator+(const Num a, const Num b);
    friend Num operator+(int a, const Num b);
    friend Num operator-(int a, const Num b);
    friend Num operator*(int a, const Num b);
    friend Num operator/(int a, const Num b);

    friend Num operator-(const Num a, const Num b);
    friend Num operator*(const Num a, const Num b);
    friend Num operator/(const Num a, const Num b);
    

public:
    Num(int a=0):su(a){};
    void show()
    {
        cout<<"num = "<<su<<endl;
    }
    Num operator++();
    Num operator++(int x);
    Num operator--();
    Num operator--(int x);
    Num operator+=(const Num bb);
    Num operator-=(const Num bb);
    bool operator==(const Num bb);
    Num operator+(int n);


};

Num Num:: operator+(int n)
{
    Num sum;
    sum.su=su+n;
    return sum;
}

Num operator+(const Num a, const Num b)
{
    Num bb;
    bb.su=a.su+b.su;
    return bb;
}
Num operator+(int a, const Num b)
{
    Num sum;
    sum.su=a+b.su;
    return sum;
}

Num operator-(const Num a, const Num b)
{
    Num bb;
    bb.su=a.su-b.su;
    return bb;

}
Num operator*(const Num a, const Num b)
{
    Num bb;
    bb.su=a.su*b.su;
    return bb;
    
}
Num operator/(const Num a, const Num b)
{
    Num bb;
    bb.su=a.su/b.su;
    return bb;
    
}

Num Num:: operator++(int x)
{
    int b=su;
    su++;
    return b;
}
Num Num::operator++()
{
    ++su;
    return su;
}
Num Num::operator--(int x)
{
    int b=su;
    su--;
    return b;
}
Num Num::operator--(){return --su;}
Num Num::operator+=(const Num bb)
{
    su+=bb.su;
    return su;
}
Num Num::operator-=(const Num bb)
{
    su-=bb.su;
    return su;
}
bool Num::operator==(const Num bb){ return((bb.su==su?true:false));}


Num operator-(int a, const Num b){
    Num sum;
    sum.su=a-b.su;
    return sum;
}
Num operator/(int a, const Num b){
    Num sum;
    sum.su=a/b.su;
    return sum;
}
Num operator*(int a, const Num b){
    Num sum;
    sum.su=a*b.su;
    return sum;
}


#endif /* q2_hpp */
