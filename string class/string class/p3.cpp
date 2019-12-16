//
//  p3.cpp
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
    cout<<"enter a line"<<endl;
    getline(cin, a);
    if(a.find("exit")!=-1)
        cout<<"program ended...";
    else
    {
        int c=a.find("love");
        a.replace(c,4,"like");
        cout<<a<<endl;
    }
}
