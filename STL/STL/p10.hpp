//
//  p7.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include<string>
#include <list>
#include <iomanip>
using namespace std;
class Book{
    int year;
    string name, author;
public:
    Book(int a, string b, string c)
    {
        year=a;
        name=b;
        author=c;
    }
    int Getyear(){return year;}
    string Getauthor(){return author;}
    string Gettitle(){return name;}

    friend ostream & operator<<(ostream &os, Book &a);
};
ostream & operator<<(ostream &os, Book &a){
    os<<setw(15)<<"year : "<<a.year<<endl;
    os<<setw(15)<<"name : "<<a.name<<endl;
    os<<setw(15)<<"author : "<<a.author<<endl;
    return os;
}


void adds(list<Book>& a)
{
    list<Book> ::iterator it=a.begin();
    string s,s1;
    int n;
    cout<<setw(15)<<"year : ";
    cin>>n;
    cout<<setw(15)<<"title : ";
    cin>>s;

    for(it;it!=a.end();it++)
    {
        if(it->Getyear()==n && it->Getauthor()==s)
        {
            cout<<"the Book already exists\n";
            return;
        }
    }
    cout<<setw(15)<<"author : ";
    cin>>s1;
    if(s1.empty())
        cin>>s1;
    a.push_back(Book(n,s,s1));
}



void searchs(list<Book>& a)
{
    list<Book> ::iterator it=a.begin();
    string s,s1;
    int n;
    cout<<setw(15)<<"year : ";
    cin>>n;
    cout<<setw(15)<<"author : ";
    cin>>s;
    int check=1;
    for(it;it!=a.end();it++)
    {
        if(it->Getyear()==n && it->Getauthor()==s)
        {
            cout<<*it<<endl;
            check=0;
            
        }
    }
    if(check)
        cout<<"the book is not found"<<endl;
    cout<<"related books...\n1) same year\n";
    for(it=a.begin();it!=a.end();it++)
    {
        if(it->Getyear()==n )
        {
            cout<<*it<<endl;
        }
    }
    cout<<endl;
    cout<<"related books...\n1) same author \n";
    for(it=a.begin();it!=a.end();it++)
    {
        if(it->Getauthor()==s )
        {
            cout<<*it<<endl;
        }
    }
    cout<<endl;
}


void deletes(list<Book>& a)
{
    list<Book> ::iterator it=a.begin();
    string s,s1;
    int n;
    cout<<setw(15)<<"year : ";
    cin>>n;
    cout<<setw(15)<<"title : ";
    cin>>s;
    
    for(it;it!=a.end();it++)
    {
        if(it->Getyear()==n && it->Gettitle()==s)
        {
            cout<<"deleting...\n";
            it=a.erase(it);
            return;
        }
    }
    cout<<"the book is not found...\n";
    
}

