//
//  main.cpp
//  company hierarchy
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "company heirarchy.h"
int main() {
    int num;
    int a,b,c;
    char name[30];
    employeemanagement Boss;
    while(1)
    {
        cout<<"\n\n===menu===\n1. add fulltime\n2. add parttime\n3. add businessmen\n4. show receipt\n5. end program\n\n==>";
        cin>>num;
        if(num==1)
        {
            cout<<"name : ";
            cin>>name;
            cout<<"salary : ";
            cin>>a;
            Boss.add_employee(new fulltime(name, a));
        }
        else if(num==2)
        {
            cout<<"name : ";
            cin>>name;
            cout<<"wage : ";
            cin>>a;
            cout<<"time : ";
            cin>>b;
            Boss.add_employee(new parttime(name, a,b));

        }
        else if(num==3)
        {
            cout<<"name : ";
            cin>>name;
            cout<<"base pay : ";
            cin>>a;
            cout<<"work level : ";
            cin>> b;
            cout<<"ratio : ";
            cin>>c;
            Boss.add_employee(new business(name,a,b,c));

        }
        else if(num==4){
            Boss.show_receipt();
        }
        else
            break;
    }
    cout<<"program terminated"<<endl;
    return 0;
}
