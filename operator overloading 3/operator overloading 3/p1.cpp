//
//  p1.cpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/6/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p1.hpp"
int main()
{
    set a1(10),a2(20),a3(10);
    a1[0]=1;
    a1[1]=2;
    a1[2]=3;
    a1[3]=4;
    a1[4]=5;
    
    a2[0]=1;
    a2[1]=2;
    a2[2]=3;
    a2[3]=4;
    a2[4]=5;
    a3=a1;
    a3[3]=5;
    cout<<a1<<a2<<a3;
    cout<<"(a1==a2)"<<endl;
    cout<<(a1==a2)<<endl;
    cout<<"a1!=a3 : ";
    cout<<(a1!=a3 )<<endl;
    cout<<"a3=a1 : "<<endl;
    a3=a1;
    cout<<a3;
}
