//
//  p2.cpp
//  STL algorithm
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include <vector>
using namespace std;


int main()
{
    int r;
    vector <int> vec;
    srand(time(0));  // Initialize random number generator.
    while(vec.size()!=100)
    {
        r = (rand() % 1000) + 1;
        vec.push_back(r);
    }
    sort(vec.begin(),vec.end(),less<int>());
    cout<<" minimum : "<<vec.front()<<endl;
    cout<<" maximum : "<<vec.back()<<endl;
}
