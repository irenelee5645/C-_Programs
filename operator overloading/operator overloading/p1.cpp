//
//  main.cpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "p1sub.hpp"
using namespace std;

int main() {

    Time time0;
    Time time1(2,40);
    Time time2(2,55);
    Time total;
    
    cout<<"planning time : ";
    time0.show();
    cout<<endl;
    
    cout<<"coding time : ";
    time1.show();
    cout<<endl;

    cout<<"fixing time : ";
    time2.show();
    cout<<endl;
    
    total=time1+time2;
    cout<<"time1 + time 2 = ";
    total.show();
    cout<<endl;
    Time time3(3,28);
    cout<<"time3=  ";
    time3.show();
    cout<<endl;
    
    total=time3+total;
    cout<<"time3.operator+(total) = ";
    total.show();
    cout<<endl;
    
    total=time1.operator+(time2.operator+(time3));
    cout<<"time1.operator+(time2.operator+(time3)) = ";
    total.show();
    cout<<endl;
    
    total=time1+time2+time3;
    cout<<"time1+time2+time3 = ";
    total.show();;
    cout<<endl;
    return 0;
    

}

