//
//  main.cpp
//  bank_management
//
//  Created by Irene Lee on 5/29/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "bank_management.hpp"
int main() {
    int n;
    bank_management KEB;
    while(1)
    {
        cout<<"\n\n\n====menu====\n";
        cout<<"1. new account\n2. deposit\n3.withdrawal\n4.account summary\n5. personal summary\n6. close\n>>";
        cin>>n;
        if(n==1)
        {
            KEB.add_account();
        }
        else if(n==2)
            KEB.deposit();
        else if(n==3)
            KEB.withdrawal();
        else if(n==4)
            KEB.show_all();
        else if(n==5)
            KEB.show_individual();
        else if(n==6)
            break;
        else
        {
            cout<<"option not available\nreenter\n";
        }
    }
    cout<<"program closed";
    
}
