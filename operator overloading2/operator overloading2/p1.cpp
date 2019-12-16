//
//  p1.cpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p1.hpp"
int main(){
    Time a,b(3,45),c;
    cout<<"enter a : ";
    cin>>a;
    cout<<"a "<<a;
    cout<<"b "<<b;
    c=a+b;
    cout<<"a+b"<<c;
    c=a+1.5;
    cout<<"a+1.5"<<c;
    c=(1.5 + b);
    cout<<"1.5+b"<<c;
}
