//
//  p2.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T, typename M>

class Pair{
    T a;
    M b;
public:
    Pair(T a, M b){
        this->a=a;
        this->b=b;
    }
   void show(){
        cout<<a<<" , "<<b<<endl;
    }
};


int main()
{
    Pair<int,int>a(1,2);
    Pair<int,double>b(3, 4.5);
    Pair <double, int>c(6.7,8);
    Pair<double, double> d(9.1,2.3);
    
    
    a.show();
    b.show();
    c.show();
    d.show();
}
