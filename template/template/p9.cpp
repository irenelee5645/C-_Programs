//
//  p9.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>

T* concat(T a[], int n1, T b[],int n2)
{
    T *rvalue=new T[n1+n2];
    int i=0;
    for( i=0;i<n1;i++)
        rvalue[i]=a[i];
    for( int j=0;j<n2;j++)
        rvalue[i+j]=b[j];
    return rvalue;
}

int main(){
    int x[]={1,2,3};
    int y[]={6,7,8,9};
    int *p=concat(x,3,y,4);
    for(int i=0;i<7;i++)
        cout<<p[i]<<" ";
    cout<<endl;
    char a[]={'l','o','v','e'};
    char b[]={'y','o','u'};
    char *q=concat(a,4,b,3);
    for(int i=0;i<7;i++)
        cout<<q[i]<<" ";
    cout<<endl;

}
