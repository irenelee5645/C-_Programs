//
//  main.cpp
//  Printer management
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "printer_management.hpp"
int main() {
    int a,b;
    char model[30];
    char comp[30];
    cout<<"set up your printers\n\n==========\n";
    cout<<"inkjet printer\n";
    cout<<"model : ";
    cin>>model;
    cout<<"company :";
    cin>>comp;
    cout<<"paper : ";
    cin>>a;
    cout<<"ink : ";
    cin>>b;
    inkjet inkprinter(model, comp, a, b);
    cout<<"laser printer\n";
    cout<<"model : ";
    cin>>model;
    cout<<"company :";
    cin>>comp;
    cout<<"paper : ";
    cin>>a;
    cout<<"toner : ";
    cin>>b;
    laser laserprinter(model, comp, a,b);
    
    cout<<"\n\n========================\nyou have two printers working"<<endl;
    inkprinter.show();
    laserprinter.show();
    
    cout<<"\n\nto end the program enter 0 0";
    while(1){
        cout<<"\n\nenter printer(1: ink/ 2: laser) and number of papers to use\n ==>";
        cin>>a>>b;
        if(a==1)
        {
            inkprinter.printinkjet(b);
            inkprinter.show();
        }
        else if(a==2)
        {
            laserprinter.printlaser(b);
            laserprinter.show();
        }
        else if(a==0)
            break;
        else
            cout<<"not on the menu"<<endl;
    }
    cout<<"program terminated\n\n";
    
}

