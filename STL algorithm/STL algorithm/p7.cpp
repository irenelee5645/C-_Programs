//
//  p7.cpp
//  STL algorithm
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <set>
#include <iomanip>
#include <functional>
using namespace std;

void output(string s)
{
    cout<<s<<" ";
}

int main()
{
    string s[3]={"BHJ","CSK","RDJ"};
    string s1[4]={"BHJ","CSK","LYD","SJW"};
    
    //multiset<string> cc;
    set<string> A,B;
    multiset<string>C;
    A.insert(s,s+3);
    B.insert(s1,s1+4);
    C.insert(A.begin(),A.end());
    C.insert(B.begin(),B.end());
    for_each(C.begin(), C.end(), output);
    cout<<"\n\n";
    set<string> cc(C.begin(),C.end());
    for_each(cc.begin(), cc.end(), output);
    cout<<endl;
    
}
