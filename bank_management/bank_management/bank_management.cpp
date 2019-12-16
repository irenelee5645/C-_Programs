//
//  bank_management.cpp
//  bank_management
//
//  Created by Irene Lee on 5/29/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "bank_management.hpp"
bankaccount::bankaccount(string account_num)
{
    this->account_num=account_num;
    cout<<"name : ";
    cin>>name;
    cout<<"money input : ";
    cin>>money;
    cout<<"account created"<<endl;
    td=money;
    tw=0;
}

void bankaccount::show_w_t()
{
    cout<<setw(15)<<"\n\naccount number "<<setw(10)<<"name"<<setw(10)<<"moeny"<<endl;
    cout<<"===================================================\n";
    cout<<setw(15)<<account_num<<setw(10)<<name<<setw(10)<<money<<endl;
}

void bankaccount::withdrawal()
{
    int n;
    cout<<"enter the amount of money to withdraw : ";
    cin>>n;
    if(n>money)
    {
        cout<<"\n\n**cannot complete the transation/n **not enough money available\n";
        return ;
    }
    money-=n;
    tw+=n;

    show_w_t();
}
void bankaccount::depoist()
{
    int n;
    cout<<"enter the amount of money to deposit : ";
    cin>>n;
    money+=n;
    td+=n;
    show_w_t();

}

void bankaccount::show()
{
    cout<<setw(15)<<account_num<<setw(10)<<name<<setw(10)<<td<<setw(15)<<tw<<setw(10)<<money<<endl;
}


string bankaccount::accountcheck(){
    return account_num;
}

void bank_management::add_account()
{
    string ap;
    while(1)
    {
        cout<<"\n\n==\nenter account number to create: ";
        cin>>ap;
        int i=0;
        for(i=0;i<count;i++)
        {
            if(list[i]->accountcheck()==ap)
                break;
        }
        if(i==count)
            break;
        cout<<"\a**the account number already exists enter another ";
    }
    list[count]=new bankaccount(ap);
    count++;
}




void bank_management::withdrawal()
{
    string ap;
    int i=0;

    while(1)
    {
        cout<<"\n\n==\nenter account number: ";
        cin>>ap;
                for(i=0;i<count;i++)
        {
            if(list[i]->accountcheck()==ap)
                break;
        }
        if(i!=count)
            break;
        cout<<"\a**the account number doesn't exist\n enter another ";
    }
    list[i]->bankaccount::withdrawal();
}
void bank_management::deposit(){
    string ap;
    int i=0;
    
    while(1)
    {
        cout<<"\n\n==\nenter account number: ";
        cin>>ap;
        for(i=0;i<count;i++)
        {
            if(list[i]->accountcheck()==ap)
                break;
        }
        if(i!=count)
            break;
        cout<<"\a**the account number doesn't exist\n enter another ";
    }
    list[i]->bankaccount::depoist();

}
void bank_management::show_all()
{
    cout<<setw(15)<<"\n\naccount number "<<setw(10)<<"name"<<setw(10)<<"deposit"<<setw(15)<<"withdrawal"<<setw(10)<<"balance"<< endl;
    cout<<"====================================================================\n";
    for(int i=0;i<count;i++)
        list[i]->bankaccount::show();
    cout<<"\n\n";
}

void bank_management::show_individual(){
    string ap;
    int i=0;
    
    while(1)
    {
        cout<<"\n\n==\nenter account number: ";
        cin>>ap;
        for(i=0;i<count;i++)
        {
            if(list[i]->accountcheck()==ap)
                break;
        }
        if(i!=count)
            break;
        cout<<"\a**the account number doesn't exist\n enter another ";
    }
    list[i]->show_w_t();
}

