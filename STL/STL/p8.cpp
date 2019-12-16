//
//  p8.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <list>
#include <iterator>
#include <vector>

using namespace std;

void output(int n)
{
    cout<<n<<" ";
}

int main()
{
    vector<int> numbers;
    int i=2;
    while(i<=100)
    {
        numbers.push_back(i);
        i++;
    }
    vector<int> ::iterator it=numbers.begin();
    vector<int> ::iterator it2=numbers.begin();

    int check=*it;
    while(it!=numbers.end())
    {
        
        it2=it;
        while(it!=numbers.end())
        {
            if((*it)%check==0 && (*it)!=check)
                it=numbers.erase(it);
            else
                it++;
        }
        it=it2;
        it++;
        check=(*it);

    }
    for_each(numbers.begin(), numbers.end(), output);
    
}
