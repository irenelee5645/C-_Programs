//
//  main.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>

using namespace std;
template<class T, class M>

void sum(T a, M b){
    cout<<a<<" + "<<b<< " = "<<a+b<<"입니다!!!\n";
}
void sum(double a, double b){
    cout<<a<<" + "<<b<<" = "<<a+b<<"이네요~~\n";
}

int main(){
    sum(2,3.5);
    sum(3.5,2);
    sum(2.0,3.5);
    sum(2,3);
}
