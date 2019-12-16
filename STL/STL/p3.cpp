//
//  p3.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;
void output (int n){
    cout<<n<<" ";
}


using namespace std;
int main()
{
    vector <int> vec;
    int i=1;
    while(vec.size()<5)
    {
        vec.push_back(i);
        i++;
    }
    
    vector<int>:: iterator it=vec.begin();
    for(it;it!=vec.end();it++)
    {
        (*it)=(*it)*(*it);
    }
    for_each(vec.begin(), vec.end(), output);
}
