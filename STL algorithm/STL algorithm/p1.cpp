//
//  p1.cpp
//  STL algorithm
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <list>
#include<algorithm>
#include <iterator>

using namespace std;


bool div4(int n)
{
    if (n%4==0)
        return 1;
    else
        return 0;
}

void output(int n)
{
    cout<<n<<" " ;
}
int main()
{
    list <int> years;
    list <int>years2;
    for(int j=1990;j<2020;j++)
        years.push_back(j);

    list <int> ::iterator it=years.begin();
    
    while(1)
    {
    
        it=find_if(it, years.end(), div4);
        if(it==years.end())
            break;
        years2.push_back(*it);
        it++;
    }
    for_each(years2.begin(), years2.end(), output);
    
    
}
