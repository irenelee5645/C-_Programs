//
//  practice11.cpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
class Time{
    int hour;
    int min;
public:
    Time(int t1=0,int t2=0){
        this->hour=t1;
        this->min=t2;
        cout<<"Creator 1 called"<<endl;
    }
    Time(double t){
        cout<<"Creater 2 called\n";
        hour=int(t);
        min=int((t-hour)*60);
        cout<<*this<<endl;
    }
    operator double(){
        cout<<"type casting called\n";
        double temp;
        temp=hour+min/60.0;
        cout<<temp<<endl;
        return temp;
    }
    
    friend ostream &operator<<(ostream &os, Time t);
};
ostream &operator<<(ostream &os, Time t){
    os<<t.hour<<"hours "<<t.min<<"minutes\n\n";
    return os;
    
}
int main()
        {
            Time t1,t2;
            t1=3.5;
            
            cout<<t1<<endl;
            t1=t1+5;
            cout<<t1<<endl;
            
            t2=1.5;
            t2=1.5+t1;
            cout<<t2<<endl;
        }
