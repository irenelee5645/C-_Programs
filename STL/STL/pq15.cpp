//
//  pq15.cpp
//  STL
//
//  Created by Irene Lee on 6/11/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;
void outint(int n){cout<<n<<" ";}

int main()
{
    list<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    auto it=a.begin();
    it++;
    a.erase(it,++it);
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<endl;
    }
