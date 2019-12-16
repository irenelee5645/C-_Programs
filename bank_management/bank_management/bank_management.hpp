//
//  bank_management.hpp
//  bank_management
//
//  Created by Irene Lee on 5/29/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef bank_management_hpp
#define bank_management_hpp

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class bankaccount{
    string account_num;
    string name;
    int money;
    int tw;
    int td;
public:
    bankaccount(string account_num);
    string accountcheck();
    void show_w_t();
    void withdrawal();
    void depoist();
    void show();
};

class bank_management{
    bankaccount *list[30];
    int count;
public:
    bank_management(){count=0;}
    ~bank_management(){    }
    void add_account();
    void withdrawal();
    void deposit();
    void show_all();
    void show_individual();
};



#endif /* bank_management_hpp */
