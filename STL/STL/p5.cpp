//
//  p5.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list <double> score;
    double n;
    double sum=0;
    double max,min;
    while(score.size()<10)
    {
        cout<<"enter grade : ";
        cin>>n;
        score.push_back(n);
        sum+=n;
        
    }
    
    list <double >:: iterator it=score.begin();
    max=min=*it;
    for(it;it!=score.end();it++)
    {
        if(*it>max)
            max=*it;
        if(*it<min)
            min=*it;
    }
    sum-=(max+min);
    cout<<"the final score is : "<<sum<<endl;
    
    
}
