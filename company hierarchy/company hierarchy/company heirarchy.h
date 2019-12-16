//
//  company heirarchy.h
//  company hierarchy
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#ifndef company_heirarchy_h
#define company_heirarchy_h
using namespace std;


class employee{
private:
    char name[30];
    int salary;
public:
    employee(char *ap, int salary){
        strcpy(name, ap);
        this->salary=salary;
    };
    void show();

};

class fulltime : public employee{
public:
    fulltime(char *ap, int salary):employee(ap,salary){};
    void show();
    
};

class parttime: public employee{
    int time;
    int wage;
public:
    parttime(char *ap, int a, int b): employee(ap,a*b){
        time=a;
        wage=b;
    };
    void show();
};

class business: public fulltime{
    int work;
    int ratio;
    int basepay;
public:
    business(char *ap, int basepay, int a, int b):fulltime(ap, basepay+a*b),work(a),ratio(b){
        this->basepay=basepay;
    };
    void show();
};

class employeemanagement{
    char employer_name[30];
    employee* list[40];
    int count;
public:
    employeemanagement():count(0){
        cout<<"enter the name of the employer:";
        cin>>employer_name;
        cout<<"\n\nemployee management list for "<<employer_name<<" is created\n\n";
    };
    void add_employee(employee* ap);
    void show_receipt();
};


#endif /* company_heirarchy_h */
