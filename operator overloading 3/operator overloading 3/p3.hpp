//
//  p3.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/7/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p3_hpp
#define p3_hpp

#include <iostream>
using namespace std;

class Date{
    int year;
    int month;
    int day;
public:
    Date(int a, int b, int c):year(a), month(b),day(c){};
    friend ostream& operator<<(ostream &os, Date &a);
    
    Date& operator++(int x){
        Date temp(*this);
        day++;
        if(day==29 && year%4!=0 && month==2)
        {
            month++;
            day=1;
            return temp;
        }
        if(day>=30)
        {
            if((month<8&&month%2==1)||(month>7&&month%2==0))
            {
                if(day==31)
                {month++;
                    day=1;}
                
            }
            else
            {month++;
                day=1;}
            
            if(month==13)
            {
                month=1;
                year++;
            }
            
        }
        return temp;
    }
    Date& operator--(int x){
        Date temp(*this);
        day=day-1;
        if(day==0)
        {
            month--;
            if((month<8&&month%2==0)||(month>7&&month%2==1))
            {
                day=31;
                month--;
                if(month==0)
                {
                    month=12;
                    year--;
                }
            }
            else if(month==3)
            {
                month--;
                if(year%4==0)
                    day=29;
                else
                    day=28;
                    
            }
            else{
                day=30;
                month--;
                if(month==0)
                {
                    month=12;
                    year--;
                }

            }

            
        }
        return temp;
    }

    
    
};
ostream& operator<<(ostream &os, Date &a){
    os<<a.year<<"년 "<<a.month<<"월 "<<a.day<<"일"<<endl;
    return os;
}


#endif /* p3_hpp */
