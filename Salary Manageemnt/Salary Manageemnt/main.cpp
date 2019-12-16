//
//  main.cpp
//  Salary Manageemnt
//
//  Created by Irene Lee on 5/27/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "salarymanagement.hpp"

int main() {
    emp sawon;
    int n;
    char irum[30];
    int ikum;
    cout<<"salary management program**\n\nenter 0 to end the progrma\n\n";
    while(1)
    {
        cout<<"<<menu>>\n1. new employee\n2. pay summary\n3. total pay\n";
        cout<<"==>";
        cin>>n;
        if(n==0)
            break;
        else if(n==1)
        {
            cout<<"enter name : ";
            cin>>irum;
            cout<<"\nenter pay : ";
            cin>>ikum;
            sawon.empAdd(new pay(irum,ikum));
            cout<<"Added"<<endl;
        }
        else if(n==2)
        {
            sawon.show();
        }
        else if(n==3){
            sawon.paysum();
        }
        else
            cout<<"\a**reenter\n\n";
        
        
    }
    
}
