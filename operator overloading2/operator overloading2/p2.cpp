//
//  p2.cpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;

class Point{
private:
    int xpos, ypos;
    
public:
    friend istream& operator>>(istream &is, Point &pp);
    friend ostream& operator<<(ostream &os, Point &pp);

};
istream& operator>>(istream &is, Point &pp)
{
    is>> pp.xpos>>pp.ypos;
    return is;
}ostream& operator<<(ostream &os, Point &pp){
    os<< "[ " <<pp.xpos<<" "<<pp.ypos<<" ]";
    return os;
}
int main()
{
    Point pos1;
    cout<<"X.Y 좌표 순으로 입력 : ";
    cin>>pos1;
    cout<<pos1;
}
