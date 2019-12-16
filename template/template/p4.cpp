//
//  p4.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template< typename T>

T add(T *n, int a)
{
    T sum=0;
    for(int i=0;i<a;i++){
        sum+=n[i];
    }
    return sum;
}
int main()
{
    int x[]={1,2,3,4,5};
    double d[]={1.2,2.3,3.4,4.5,5.6,6.7};
    cout<<"sum of x[] ="<< add(x,5)<<endl;
    cout<<"sum of d[] "<< add(d,6)<<endl;

}
