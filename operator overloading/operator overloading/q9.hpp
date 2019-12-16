//
//  q9.hpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef q9_hpp
#define q9_hpp

#include <iostream>
#include <string>
using namespace std;


class Points{
    int x;
    int y;
    friend ostream& operator<<(ostream &os, const Points &a);
public:
    Points(int a=0, int b=0):x(a),y(b){};
    Points(const Points &a){
        x=a.x;
        y=a.y;
    }
    Points operator+(const Points &a){
        Points temp;
        temp.x=x+a.x;
        temp.y=y+a.y;
        return temp;
    }
    Points operator-(const Points &a){
        Points temp;
        temp.x=x-a.x;
        temp.y=y-a.y;
        return temp;
    }

    Points operator*(const Points &a){
        Points temp;
        temp.x=x*a.x;
        temp.y=y*a.y;
        return temp;
    }

    Points operator/(const Points &a){
        Points temp;
        temp.x=x/a.x;
        temp.y=y/a.y;
        return temp;
    }

};


ostream& operator<<(ostream &os, const Points &a)
{
    os<<"("<<a.x<<" "<<a.y<<")"<<endl;
    return os;
}

Points get_points()
{
    char ap[10];
    char num1[4];
    char num2[4];
    int x,y;
    cout<<" : ";
    cin.getline(ap,10);
    for(int i=0;i<10;i++)
    {
        if(ap[i]=='(')
        {
            i++;
            for(int j=0;j<4;j++)
            {
                if(ap[i]==' ')
                {
                    num1[j]=NULL;
                    i++;
                    for(int k=0;k<4;k++)
                    {
                        if(ap[i]==')')
                        {
                            num2[k]=NULL;
                            i++;
                            break;
                        }
                        num2[k]=ap[i];
                        i++;
                    }
                    break;
                }
                num1[j]=ap[i];
                i++;
            }
                
        }
    }
    x=stoi(num1);
    y=stoi(num2);
    Points aa(x,y);
    cout<<endl;
    return aa;
}
#endif /* q9_hpp */
