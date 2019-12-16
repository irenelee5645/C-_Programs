//
//  p11.cpp
//  template
//
//  Created by Irene Lee on 6/6/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
template <typename T>

class randomlist{
    T list[7];
    int cnt;
public:
    
    randomlist():cnt(0){    };
    void add(){
        if(cnt==7)
        {
            cout<<"the list is full"<<endl;
            return ;
        }
        cout<<"enter a value : ";
        
        cin>>list[cnt++];
    }
    void randomprint()
    {
        //int a;
        srand((unsigned)time(NULL));
        cout<<"random : "<<list[rand()%6+0]<<endl;
    }
};
int main(){
    int a;
    randomlist <int> RR;
    for(a=0;a<7;a++)
        RR.add();
    for(a=0;a<7;a++)
        RR.randomprint();
}
