//
//  p6.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T>

T larger(T a[], int b){
    T max=a[0];
    for(int i=0;i<b;i++)
    { if(a[i]>max)
        max=a[i];}
    return max;
}
int main(){
    int x[]={1,10,100,5,4};
    cout<<larger(x,5)<<endl;
    double y[]={6.4,3.3,-200.6,7.7,8.8,20.3};
    cout<<larger(y,6)<<endl;
}
