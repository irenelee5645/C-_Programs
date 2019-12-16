//
//  p5.cpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p5.hpp"
int main()
{
    Mystring ary[5];
    int i;
    cout<<"enter 5 fruits : \n";
    for(i=0;i<5;i++)
    {
        ary[i]>>cin;
    }
    
    cout<<"the longer fruit of the first two : ";
    if(ary[0]>ary[1])
        cout<<ary[0]<<endl;
    else
        cout<<ary[1]<<endl;
    for(i=1;i<5;i++)
    {
        ary[0]=ary[0]+ary[i];
    }
    
    cout<<"print all : \n";
    for(i=0;i<5;i++)
    {
        cout<<ary[i];
    }
}
