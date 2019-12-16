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
class Student{
    string name, address, num,phone;
public:
    Student(string a, string b, string c, string d)
    {
        name=a;
        address=b;
        num=c;
        phone=d;
        cout<<"created...";
    }
    string GetStudent(){return name;}
    friend ostream & operator<<(ostream &os, Student &a);
};
ostream & operator<<(ostream &os, Student &a){
    os<<setw(15)<<"name : "<<a.name<<endl;
    os<<setw(15)<<"address : "<<a.address<<endl;
    os<<setw(15)<<"school ID : "<<a.num<<endl;
    os<<setw(15)<<"phone num : "<<a.phone<<endl;
    return os;
}


void adds(list<Student>& a)
{
    list<Student> ::iterator it=a.begin();
    string s,s1,s2,s3;
    cout<<setw(15)<<"name : ";
    cin>>s;
    for(it;it!=a.end();it++)
    {
        if(it->GetStudent()==s)
        {
            cout<<"the student already exists\n";
            return;
        }
    }
    cout<<setw(15)<<"address : ";
    cin>>s1;
    cout<<setw(15)<<"school ID : ";
    cin>>s2;
    cout<<setw(15)<<"phone num : ";
    cin>>s3;
    a.push_back(Student(s,s1,s2,s3));
}

void searchs(list<Student> &a)
{
    list<Student> ::iterator it=a.begin();
    string s,s1,s2,s3;
    cout<<setw(15)<<"name : ";
    cin>>s;
    for(it;it!=a.end();it++)
    {
        if(it->GetStudent()==s)
        {
            cout<<*it<<endl;
            return;
        }
    }
  
    cout<<"not found...\n\n";
}

void deletes(list<Student> &a)
{
    list<Student> ::iterator it=a.begin();
    string s,s1,s2,s3;
    cout<<setw(15)<<"name : ";
    cin>>s;
    for(it;it!=a.end();it++)
    {
        if(it->GetStudent()==s)
        {
            cout<<"deleting...\n\n";
            a.erase(it);
            return;
        }
    }
    cout<<"data not found...\n\n";
}
int main()
{
    list <Student> myclass;
    int n;
    while(1){
        cout<<"\n\n==menu\n1. add\n2. search\n3. delete\n4. end\n>>";
        cin>>n;
        if(n==1)
            adds(myclass);
        else if(n==2)
            searchs(myclass);
        else if(n==3)
            deletes(myclass);
        else if(n==4)
            break;
        else
            cout<<" not an option...\n";
    }
    cout<<"program closed...\n\n\n";

}
