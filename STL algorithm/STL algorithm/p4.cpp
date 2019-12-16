//
//  p4.cpp
//  STL algorithm
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <iterator>
#include <functional>
#include <vector>
using namespace std;

/*int addvecs(int x, vector<int>a)
{
    static vector<int> ::iterator it=a.begin();
    return x+(*(it++));
}*/


int main()
{
    vector <int> a,b;
    
    for(int i=1;i<=10;i++)
        a.push_back(i);
    for(int i=10;i<=19;i++)
        b.push_back(i);
    vector <int> c(a.size());
    //transform(a.begin(),a.end(), c.begin(),bind2nd(ptr_fun(addvecs),b) );
    copy(a.begin(),a.end(), c.begin());
    for(int i=0;i<10;i++)
        cout<<c[i]<<" ";
    cout<<endl;
    for(int i=0;i<10;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    transform(c.begin(),c.end(),b.begin(),b.end(),plus<int>());
    for(int i=0;i<c.size();i++)
        cout<<c[i]<<" ";
    cout<<endl;
}

