//
//  p3.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>

void myswap(T &a, T &b){
    T c;
    c=a;
    a=b;
    b=c;
}

class Circle{
    int radius;
public:
    Circle(int radius=1){this->radius=radius;}
    int getRadius(){return radius;}
    void show(){ cout<<"area : "<<radius*radius*3.14<<endl;}
};

int main()
{
    int a=4, b=5;
    double c=.3, d=12.5;
    char *name1="apple";
    char *name= "banana";
    Circle donut(5),pizza(20);
    
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;
    cout<<name1<<" "<<name<<endl;
    donut.show();
    pizza.show();
    
    myswap(a, b);
    myswap(c, d);
    myswap(name1,name);
    myswap(donut, pizza );
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;
    cout<<name1<<" "<<name<<endl;
    donut.show();
    pizza.show();

    
}
