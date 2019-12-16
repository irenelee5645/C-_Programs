//
//  p6.hpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p6_hpp
#define p6_hpp

#include <iostream>
#include <map>
#include <string>
using namespace std;


typedef map<string, string> Dict;

void addword(Dict &a)
{
    string s,s2;
    cout<<"enter a word to add : ";
    cin>>s;
    Dict:: iterator it=a.begin();
    it=a.find(s);
    if(it!=a.end())
    {
        char c;
        cout<<"the word already exists. Do you want to change its meaning? (y\n)";
        c=getchar();
        while(!isalpha(c))
        { c=getchar();}
        if(c=='n')
            return;
        cout<<"enter the meaning : ";
        cin>>s2;
        it->second=s2;
        return ;
    }
    cout<<"enter the meaning : ";
    cin>>s2;
    a.insert(make_pair(s,s2));
}

void searchw(Dict &a)
{
    if(a.empty())
    {
        cout<<"the dictionary is empty...\n";
        return;
    }
    string s;
    cout<<"enter a word to search : ";
    cin>>s;
    Dict:: iterator it=a.begin();
    it=a.find(s);
    if(it==a.end())
    { cout<<"the word is not found....\n";
        return ;
        
    }
    cout<<"word    : "<<it->first<<endl;
    cout<<"meaning : "<<it->second<<endl;
    
}
void deleteword(Dict &a){
    if(a.empty())
    {
        cout<<"the dictionary is empty...\n";
        return;
    }
    string s;
    cout<<"enter a word to add : ";
    cin>>s;
    Dict:: iterator it=a.begin();
    it=a.find(s);
    if(it==a.end())
    {
        cout<<"the word is not found";
            return;
    }
    
    a.erase(it);
    cout<<" deleted...\n";
}




#endif /* p6_hpp */
