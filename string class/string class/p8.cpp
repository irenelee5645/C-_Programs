//
//  p8.cpp
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
    string *list;
    int n,cnt;
    string before, after;
    string startw="apple";
    cout<<"enter the number of players : ";
    cin>>n;
    list=new string[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the player's name : ";
        cin>>list[i];
    }
    cout<<"시작하는 단어는 "<<startw<<" 입니다.\n";
    before=startw;
    cnt=0;
    while(1)
    {
        if(cnt==n)
            cnt=0;
        cout<<list[cnt]<<" : ";
        cin>>after;
        char c=after[0];
        char d=before[before.size()-1];
        if(c!=d)
        {
            cout<<list[cnt]<< "가 졌습니다.....\n\n";
            break;
        }
        before=after;
        cnt++;
    }
}
