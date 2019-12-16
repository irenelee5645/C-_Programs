//
//  p4.cpp
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
    string a;
    cout<<"enter a line : ";
    getline(cin, a);
    char *b;
    b=new char[a.size()+1];
    for(int i=a.size(); i>0;i--)
        b[a.size()-i]=a[i-1];
    cout<<b<<endl;
}
