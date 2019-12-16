//
//  p1.hpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p1_hpp
#define p1_hpp

#include <iostream>
using namespace std;

class Time{
private:
    int hours;
    int minutes;
public:
    Time(){
        hours=0;
        minutes=0;
    }
    
    Time(double a){
        hours=(int) a;
        minutes=(int)(a-hours)*60;
    }
    Time( int a, int b):hours(a), minutes(b){};
    Time operator+(const Time &t){
        
        Time temp;
        int n=t.hours*60+t.minutes;
        int m=hours*60+minutes;
        m=m+n;
        temp.hours=m/60;
        temp.minutes=m%60;
        return temp;
    }
    Time operator-(const Time &t){
        Time temp;
        int n=t.hours*60+t.minutes;
        int m=hours*60+minutes;
        m=m-n;
        temp.hours=m/60;
        temp.minutes=m-hours;
        return temp;
    }
    Time operator*(double n)const{
        Time temp;
        double a=hours*60+minutes;
        a*=n;
        temp.hours=(int)a/60;
        temp.minutes=(int)a%60;
        return temp;
    }
    Time operator=(const Time &pp)
    {
        hours=pp.hours;
        minutes=pp.minutes;
        return *this;
    }
    Time operator+=(int a)
    {
        minutes=minutes+a;
        return *this;
    }
    Time operator+(double a)
    {
        minutes=minutes+(a-int(a))*60;
        hours+=(int)a+minutes/60;
        minutes=minutes%60;

        return *this;
    }
    Time operator-(double a)
    {
        hours-=(int)a;
        minutes=minutes-(a-int(a))*60;
        return *this;
    }

    Time operator-=(int a)
    {
        minutes=minutes-a;
        return *this;
    }

    Time operator++(int x)
    {
        Time a(*this);
        this->minutes+=1;
        return a;
    }
    Time operator++()
    {
        
        minutes+=1;
        return *this;
    }
    friend Time operator*(double n, const Time &t);
    friend ostream& operator<<(ostream &os, Time &t);
    friend istream& operator>>(istream &is, Time &t);
    friend Time operator+(double a, const Time &t);


};
Time operator*(double n, const Time &t){return t*n;}

ostream& operator<<(ostream &os, Time &t)
{
    os<<" : "<<t.hours<<"hours "<<t.minutes<<"minutes"<<endl;
    return os;
}
istream& operator>>(istream &is, Time &t){
    is>>t.hours>>t.minutes;
    return is;
}

Time operator+(double a, const Time &t){
    Time temp;
    temp.minutes=(a-(int)a)*60+t.minutes;
    temp.hours=(int)a+t.hours+temp.minutes/60;
    temp.minutes=temp.minutes%60;
    return temp;
}


#endif /* p1_hpp */
