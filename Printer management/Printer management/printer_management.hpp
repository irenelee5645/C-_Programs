//
//  printer_management.hpp
//  Printer management
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef printer_management_hpp
#define printer_management_hpp

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class printer{
    char model[30];
    char comp[30];
    int numpaper;
public:
    printer(char *ap, char *bp, int b){
        strcpy(model,ap);
        strcpy(comp, bp);
        numpaper=b;
    };
    void add_pages(int n);
    void print(int pages);
    void show();
};

class inkjet:public printer{
    int ink;
public:
    inkjet(char *ap, char *bp, int a, int b):printer(ap,bp,a),ink(b){};
    void printinkjet(int pages);
    void show(){ printer::show(); cout<<"ink left : "<<ink<<endl;};
};

class laser:public printer{
    int toner;
public:
    laser(char *ap, char *bp, int a, int b):printer(ap,bp,a),toner(b){};
    void printlaser(int pages);
    void show(){ printer::show(); cout<<"toner left : "<<toner<<endl;};

};



#endif /* printer_management_hpp */
