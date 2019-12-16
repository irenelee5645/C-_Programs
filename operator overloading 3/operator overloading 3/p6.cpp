//
//  p6.cpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/9/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p6.hpp"
int main()
{
    Set A,B,C;
    cout<<" A's elements : "<<endl;
    A+3;
    cout<<A;
    A+4;
    cout<<A;
    A+4;
    cout<<A;
    A-4;
    cout<<A;
    A+4;
    cout<<A;

    
    cout<<"B's elements : "<<endl;
    B+3;
    cout<<B;
    B+4;
    cout<<B;
    B+5;
    cout<<B;
    cout<<"A|B"<<endl;
    C=A|B;
    cout<<C;
    cout<<"A&B"<<endl;
    C=A&B;
    cout<<C;
    cout<<"A==B";
    if(A==B)
        cout<<"true";
    else
        cout<<"false";
    cout<<"enter A";
    cin>>A;
    cout<<A;
}
