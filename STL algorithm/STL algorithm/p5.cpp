//
//  p5.cpp
//  STL algorithm
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <functional>
#include <string>

using namespace std;

bool sizegreater(string s)
{
    if(s.size()>5)
        return 1;
    else
        return 0;
}

int main()
{
    cout<<"enter a sentence : \n";
        vector <string> vec;
    string s;
    while(1)
    {
        
        cin>>s;
        if(s=="^Z")
            break;
        vec.push_back(s);
    }
    auto f=function<bool(string)>(sizegreater);
    size_t n1= count_if(vec.begin(),vec.end(),sizegreater);
    cout<<"there are "<< n1<<" words with more than 5 letters"<<endl;
    
}
