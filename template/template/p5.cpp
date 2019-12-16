//
//  p5.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>


using namespace std;
template<typename T, typename M>

void mcopy(T *a, M *b,int c)
{
    for(int i=0;i<c;i++)
        b[i]=a[i];
}

int main()
{
    int x[]={1,2,3,4,5};
    double d[5];
    char c[5]={'H','E','L','L','O'},e[5];
    mcopy(x,d,5);
    mcopy(c,e,5);
    for(int i=0;i<5;i++)
        cout<<d[i]<<' ';
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<e[i]<<' ';
    cout<<endl;

}
