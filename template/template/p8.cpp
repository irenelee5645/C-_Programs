//
//  p8.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T>

void reversearray(T a[], int num)
{
    T temp;
    for(int i=0;i<(num/2);i++)
    {
        temp=a[i];
        a[i]=a[num-1-i];
        a[num-1-i]=temp;
    }
}

int main(){
    int x[]={1,2,3,4,5};
    char y[]="apple";
    reversearray(x, 5);
    reversearray(y, 5);
    for(int i=0;i<5;i++)
        cout<<x[i]<<" ";
    cout<<"\n"<<y<<"\n";
}
