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
    int sum=0;
    srand(time(0));  // Initialize random number generator.

    while(v.size()!=10)
    {
        int r = (rand() % 100) + 1;
        v.push_back(r);
        sum+=r;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"the sum is  : "<<sum<<endl;
}
