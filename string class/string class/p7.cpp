//
//  p7.cpp
//  string class
//
//  Created by Irene Lee on 6/7/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    string a,b;
    char listalph[]="abcdefghijklmnopqrstuvwxyz";
    int alphcount[26]={0};
    cout<<"enter a line : ";
    getline(cin, a);
    for( int i=0;i<a.size();i++)
    {
        a[i]=tolower(a[i]);
        for(int j=0;j<26;j++)
        {
            if(listalph[j]==a[i])
                alphcount[j]++;
        }
    }
    for(int j=0;j<26;j++)
    {
        cout<<listalph[j]<<'('<<alphcount[j] <<')'<<" : ";
        for(int i=0;i<alphcount[j];i++)
            cout<<'*';
        cout<<endl;
    }

    
}
