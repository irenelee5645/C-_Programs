//
//  airplane.hpp
//  airplane
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef airplane_hpp
#define airplane_hpp

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;

class plane{
    int planenum;
    char * reserved[10];
public:
    plane(int planenum){
        this->planenum=planenum;
        for(int i=0;i<10;i++)
        {
            reserved[i]=NULL;
        }
    };
    void getseat();
    void cancelseat();
    void show();
};

class KAL{
    plane *list[3];
public:
    KAL(){
        for(int i=0;i<3;i++)
        {
            list[i]=new plane(i+1);
        }
    }
    void getseat(int planenum);
    void cancelseat(int planenum);
    void show(int planenum);
};
#endif /* airplane_hpp */
