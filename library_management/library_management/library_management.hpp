//
//  library_management.hpp
//  library_management
//
//  Created by Irene Lee on 5/29/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef library_management_hpp
#define library_management_hpp

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

class product{
private:
    int pID;
    char explain[40];
    char publisher[40];
    int price;
    
public:
    product(int pID, char *explain, char *publisher, int price){
        this->pID=pID;
        this->price=price;
        strcpy(this->explain,explain);
        strcpy(this->publisher,publisher);
    }
    virtual ~product(){};
    void show();
    int showID();
};

class book:public product{
    int isbn;
    char author[30];
    char title[30];
public:
    book(int pID, char *explain, char *publisher, int price,int isbn, char *author, char*title): product(pID, explain, publisher, price){
        this->isbn=isbn;
        strcpy(this->author,author);
        strcpy(this->title,title);
    }
    void show();
};

class cbbook: public book{
    char language[30];
public:
    cbbook(int pID, char *explain, char *publisher, int price,int isbn, char *author, char*title, char *language): book(pID, explain, publisher, price,isbn,author, title){
        strcpy(this->language,language);
    }
    void show();
};


class cdisk: public product{
    char title[30];
    char singer[30];
public:
    cdisk(int pID, char *explain, char *publisher, int price, char *title, char *singer):product(pID, explain, publisher, price){
        strcpy(this->title,title);
        strcpy(this->singer, singer);
    }
    void show();
};

class libman{
    product* list[30];
    int typelist[30];
    int count;
public:
    libman(): count(0){};
    void add_item();
    void show_item();
};

#endif /* library_management_hpp */
