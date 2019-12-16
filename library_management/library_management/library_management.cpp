//
//  library_management.cpp
//  library_management
//
//  Created by Irene Lee on 5/29/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "library_management.hpp"

void product::show(){
    cout<<"pID : "<<pID<<"\nexplanation : "<<explain<<"\npublisher : "<<publisher<<"\n price : "<<price<<endl;
}

int product::showID(){
    return pID;
}

void book::show(){
    product::show();
    cout<<"ISBN : "<<isbn<<"\nauthor : "<<author<<"\ntitle : "<<title<<endl;
}

void cbbook::show(){
    book::show();
    cout<<"language : "<<language<<endl;
}

void cdisk::show(){
    product::show();
    cout<<"album title : "<<title<<"\nsinger : "<<singer<<endl;
}

void libman::add_item(){
    int n;
    int pID;
    char explain[30];
    char publisher[30];
    int price;
    int isbn;
    char producer[30];
    char title[30];
    char language[30];
    while(1)
    {
    cout<<"product type : 1.book 2.CD 3.audio book : ";
    cin>>n;
    if(n==1)
    {
        cout<<"ID : ";
        cin>>pID;
        cout<<"explanation : ";
        cin>>explain;
        cout<<"publisher : ";
        cin>>publisher;
        cout<<"price : ";
        cin>>price;
        cout<<"ISBN : ";
        cin>>isbn;
        cout<<"author : ";
        cin>>producer;
        cout<<"title : ";
        cin>>title;
        list[count]=new book(pID, explain, publisher,price, isbn,producer,title);
        typelist[count++]=1;
        break;
    }
    else if(n==3)
    {
        cout<<"ID : ";
        cin>>pID;
        cout<<"explanation : ";
        cin>>explain;
        cout<<"publisher : ";
        cin>>publisher;
        cout<<"price : ";
        cin>>price;
        cout<<"ISBN : ";
        cin>>isbn;
        cout<<"author : ";
        cin>>producer;
        cout<<"title : ";
        cin>>title;
        cout<<"language : ";
        cin>>language;
        list[count]=new cbbook(pID, explain, publisher,price, isbn,producer,title,language);
        typelist[count++]=3;
        break;
    }
    else if(n==2)
    {
        cout<<"ID : ";
        cin>>pID;
        cout<<"explanation : ";
        cin>>explain;
        cout<<"publisher : ";
        cin>>publisher;
        cout<<"price : ";
        cin>>price;
        cout<<"ISBN : ";
        cin>>isbn;
        cout<<"author : ";
        cin>>producer;
        cout<<"title : ";
        cin>>title;
        list[count]=new cdisk(pID, explain, publisher,price,title,producer);
        typelist[count++]=2;
        break;
    }
    else
        cout<<"option not available\nreenter\n";
}
}

void libman::show_item(){
    int n;
    int i=0;
    int check=0;
    while(1)
    {
        if(count==0)
        {   cout<<"\n**no item exists\n";
            break;}
        cout<<"\nenter product id : ";
        cin>>n;
        for(i=0;i<count;i++)
        {
            if(list[i]->showID()==n)
                break;
        }
        if(i==count)
            cout<<"item not found\nreenter the id\n\n============\n";
        else
        {
            check=1;
            break;
        }
    }
    if(check)
    {
        if(typelist[i]==1)
        {
            book *ap=dynamic_cast<book *>(list[i]);
            ap->book::show();
        }
        else if(typelist[i]==2)
        {
            cbbook *ap=dynamic_cast<cbbook *>(list[i]);
            ap->cbbook::show();

        }
        else if(typelist[i]==3)
        {
            cdisk *ap=dynamic_cast<cdisk *>(list[i]);
            ap->cdisk::show();
        }

    }
}
