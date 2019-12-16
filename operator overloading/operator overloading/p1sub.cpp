//
//  p1sub.cpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p1sub.hpp"
Time::Time()
{
    hours=minutes=0;
}
Time::Time(int h, int m){
    hours=h;
    minutes=m;
}
void Time:: addMin(int m){
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}
void Time:: addHr(int h)
{
    hours+=h;
}
void Time::reset(int h, int m)
{
    hours=h;
    minutes=m;
}
Time  Time::operator+(const Time &t)const
{
    Time sum;
    sum.minutes=minutes +t.minutes;
    sum.hours=hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}
void Time:: show() const{
    std::cout<<hours<<"hours, "<<minutes<<"minutes"<<std::endl;
}
