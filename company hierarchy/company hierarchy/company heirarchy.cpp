//
//  company heirarchy.cpp
//  company hierarchy
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "company heirarchy.h"
void employee::show(){
    cout<<setw(10)<<name<<setw(10)<<salary<<endl;
}

void fulltime::show(){
    employee::show();
}


void parttime::show(){
    employee::show();
}

void business::show()
{
    fulltime::show();
}

void employeemanagement::add_employee(employee* ap){
    list[count++]=ap;
}

void employeemanagement::show_receipt(){
    cout<<setw(10)<<"name"<<setw(10)<<"salary"<<endl;
    cout<<"========================="<<endl;
    for(int i=0;i<count;i++){
        list[i]->employee::show();
    }
}
