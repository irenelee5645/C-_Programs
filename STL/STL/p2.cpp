//
//  p2.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;
int main()
{
    vector <string> vec;
    while(vec.size()<5)
    {
        cout<<" : ";
        string s;
        cin>>s;
        vec.push_back(s);
    }
    
    vector<string>:: iterator it=vec.begin();
    string last=*it;
    for(it;it!=vec.end();it++)
    {
        if(*it>last)
            last=*it;
    }
    cout<<last<<" is the last word in a dictionary\n\n";
}
