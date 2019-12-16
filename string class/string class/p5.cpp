//
//  p5.cpp
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
    string a,b;
    int sum=0;
    cout<<"enter an equation : ";
    getline(cin,a);
    int i=0;
    int j=0;
    int check;
    while(1)
    {
        i=a.find("+",i+1);
        if(i==-1)
        {
            i=a.rfind("+");
            if(i==-1)
                break;
            b=a.substr(i+1,a.size()-i);
            sum+=stoi(b);
            break;
        }
        b=a.substr(j,i);
        sum+=stoi(b);
        j=i+1;
        
    }
    cout<<sum<<endl;
}
