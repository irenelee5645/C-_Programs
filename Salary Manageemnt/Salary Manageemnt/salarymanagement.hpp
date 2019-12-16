//
//  salarymanagement.hpp
//  Salary Manageemnt
//
//  Created by Irene Lee on 5/27/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef salarymanagement_hpp
#define salarymanagement_hpp

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;
class pay{
private:
    char name[100];
    int kum;
public:
    pay(char *ap,int a){
        strcpy(name, ap);
        kum=a;
    }
    void show(){
        cout<<setw(10)<<name<<setw(10)<<kum<<endl;
    };
    int salary(){
        return kum;
    };
};

class emp{
private:
    pay* emplist[50];
    int empnum;
public:
    emp():empnum(0){};
    void empAdd(pay* emp){
        emplist[empnum++]=emp;
    }
    void show(){
        if(empnum==0){
            cout<<"there are not employees"<<endl;
            }
        else{
            cout<<setw(10)<<"employee"<<setw(10)<<"salary"<<endl;
            cout<<"=============================\n";
            for(int i=0;i<empnum;i++){
                emplist[i]->pay::show();
            }
                
        }
    };
    void paysum(){
        int total=0;
        for(int i=0;i<empnum;i++){
            total+=emplist[i]->salary();
        }
        cout<<"the total salary is : "<< total<<endl;
    };
    
};
#endif /* salarymanagement_hpp */
