//
//  p2.cpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/6/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p2.hpp"
int main()
{
    String s1("Hello");
    String s2("World!");
    String s3=s1+s2;
    String s4;
    String s5("Hello");
    s1.print();
    s2.print();
    s3.print();
    cout<<"string s4 :"<<(!s4)<<endl;
    cout<<(s1==s5)<<endl;
    cout<<(s1!=s5)<<endl;
    cout<<(s1<s2)<<endl;
    cout<<(s1>s2)<<endl;
    cout<<(s1<=s2)<<endl;
    cout<<(s1>=s2)<<endl;

}
