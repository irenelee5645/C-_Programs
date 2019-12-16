//
//  main.cpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;

class Number{
private:
    int num;
public:
    Number(int n=0):num(n){
        cout<<"Number(int n=0)"<<endl;
    }
    Number& operator=(const Number &ref){
        cout<<"operator=()"<<endl;
        num=ref.num;
        return *this;
    }
   operator int(){
        return num;
    }
    void showNumber(){ cout<<num<<endl;}
};
int main() {
    Number num1;
    num1=30;
    
    Number num2=int(num1)+20;
    num2.showNumber();
    return 0;
}
