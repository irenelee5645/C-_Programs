//
//  p1sub.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p1sub_hpp
#define p1sub_hpp

#include <iostream>
class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m=0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h=0,int m=0);
    Time operator+(const Time &t)const;
    void show() const;
    
};

#endif /* p1sub_hpp */
