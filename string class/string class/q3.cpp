//
//  q3.cpp
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
    string a("Hello C++");
    cout<<a.length()<<endl;
    cout<<a<<endl;
    cout<<a.at(6)<<endl;
    cout<<a.find("C")<<endl;
    int n=a.find("+++");
    cout<<n<<endl;
    a.erase(1,3);
    cout<<a<<endl;
    
}
