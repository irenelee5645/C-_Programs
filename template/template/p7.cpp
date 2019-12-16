//
//  p7.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template<class T>

bool equalArrays(T a[], T b[], int num)
{
    for(int i=0;i<num;i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main()
{
    int x1[]={1,10,100,5,4};
    int x2[]={1,10,100,5,4};
    if(equalArrays(x1, x2,5))
        cout<<"they are the same\n";
    else
        cout<<"they are different\n";
    double y1[]={6.4,3.3,-200.6,7.7,8.8,20.3};
    double y2[]={6.4,3.4,-200.6,7.7,8.8,20.3};
    if(equalArrays(y1, y2,6))
        cout<<"they are the same\n";
    else
        cout<<"they are different\n";
}
