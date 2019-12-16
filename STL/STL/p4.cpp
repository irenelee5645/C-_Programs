//
//  p1.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
using namespace std;
int main()
{
    vector <int> v;
    srand(time(0));  // Initialize random number generator.
    
    while(v.size()!=5)
    {
        int r = (rand() % 100) + 1;
        cout<<r<<" ";
        v.push_back(r);
    }
    
    sort(v.begin(), v.end());
    
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
