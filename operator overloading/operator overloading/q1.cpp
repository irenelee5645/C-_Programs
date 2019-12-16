//
//  q1.cpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "q1.hpp"
int main()
{
    Num Kim(40),Lee(10);
    int n1,n2,n3,n4;
    n1=Kim+Lee;
    n2=Kim-Lee;
    n3=Kim*Lee;
    n4=Kim/Lee;
    cout<<"a+b = "<<n1<<endl;
    cout<<"a-b = "<<n2<<endl;
    cout<<"a*b = "<<n3<<endl;
    cout<<"a/b = "<<n4<<endl;

}
