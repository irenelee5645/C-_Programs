//
//  p2.cpp
//  string class
//
//  Created by Irene Lee on 6/7/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a("I love you");
    for( int i=0;i<=a.size();i++)
    {
        string b,c;
        b=a.substr(i,a.size());
        c=a.substr(0,i);
        b+=c;
        cout<<b<<endl;
    }
}
