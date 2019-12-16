//
//  p1.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;
template<class T>

T bigger(T a, T b){
    return (a>b? a:b);
}
int main(){
    int a=20, b=50;
    char c='a', d='z';
    cout<<"bigger(20,50) is : "<<bigger(a, b)<<endl;
    cout<<"bigger('a','z') is : "<<bigger(c, d)<<endl;
}
