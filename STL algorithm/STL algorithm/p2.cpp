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

bool iseven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}


int main()
{
    int r;
    vector <int> vec;
    srand(time(0));  // Initialize random number generator.
    while(vec.size()!=100)
    {
        r = (rand() % 10) + 1;
        vec.push_back(r);
    }
    size_t n1=count_if(vec.begin(),vec.end(),iseven);
    cout<<"there are "<<n1<<" even numbers.";
    
}
