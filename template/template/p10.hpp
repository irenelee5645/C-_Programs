//
//  p10.hpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p10_hpp
#define p10_hpp

#include <iostream>
using namespace std;
template <typename T>


class Node{
private:
    T data;
    Node *previous;
    Node *next;
public:
    Node(T i):data(i){}
    friend Node* addnode(Node * &a);
    friend  Node* deletenode(Node * & start);
    friend void show(Node *a);
    /*void operator=(Node *a){
        this->previous=a->previous;
        this->next=a->previous;
        a->previous->next=this;
        a->next->previous=this;
    }*/
};

Node<int>* addnode(Node<int>* &a)
{
    int b;
    if(a==NULL)
    {
        cout<<"enter data : ";
        cin>>b;
        a=new Node<int>(b);
        //a->data=b;
        a->previous=NULL;
        a->next=NULL;
        return a;
    }
    else
    {
        cout<<"enter data : "<<endl;
        cin>>b;
        a->next=new Node<int>(b);
        a->next->previous=a;
        a->next->next=NULL;
        return a->next;
    }
}

 Node<int>* deletenode(Node<int> * & start) //take the pointer of the beginning point return the pointer value of the last item
{
    
    Node <int> *a;
    a=start;
    int c;
    if(a==NULL){
        cout<<"\n***the queue is empty...\n";
        return a;
        }
    
    cout<<"enter the data to delete : ";
    cin>>c;
    while(1)
    {
        if(a->data==c)
        {
            cout<<"\ndata found\n";
            break;        }
        if(a->next==NULL){
            cout<<"\n**data not found\n";
            return a;
        }
        a=a->next;
    }
    if(a==start)
    {
        start=a->next;
        while(1)
        {
            if(a->next==NULL)
                break;
            a=a->next;
        }
        return a;

    }
    
    if(a->next==NULL)
    {
        a=a->previous;
        delete a->next;
        a->next=NULL;
        return a;
    }
    Node<int> *b;
    Node <int> *d;
    d=a->previous;
    b=a->next;
    a=a->previous;
    //delete a->next;
    a->next=b;
    a=a->next;
    a->previous=d;
    while(1)
    {
        if(b->next==NULL)
            break;
        b=b->next;
    }
    return b;
}



void show(Node <int> *a)
{
    if(a==NULL)
    {
        cout<<"\n\nthe queue is empty\n";
        return;
    }
    while(1)
    {
        cout<<a->data<< " ";
        if(a->next==NULL)
            break;
        a=a->next;
        
    }
}



Node<double>* addnode(Node<double>* &a)
{
    double b;
    if(a==NULL)
    {
        cout<<"enter data : ";
        cin>>b;
        a=new Node<double>(b);
        //a->data=b;
        a->previous=NULL;
        a->next=NULL;
        return a;
    }
    else
    {
        cout<<"enter data : "<<endl;
        cin>>b;
        a->next=new Node<double>(b);
        a->next->previous=a;
        a->next->next=NULL;
        return a->next;
    }
}

Node<double>* deletenode(Node<double> * & start) //take the pointer of the beginning point return the pointer value of the last item
{
    
    Node <double> *a;
    a=start;
    double c;
    if(a==NULL){
        cout<<"\n***the queue is empty...\n";
        return a;
    }
    
    cout<<"enter the data to delete : ";
    cin>>c;
    while(1)
    {
        if(a->data==c)
        {
            cout<<"\ndata found\n";
            break;        }
        if(a->next==NULL){
            cout<<"\n**data not found\n";
            return a;
        }
        a=a->next;
    }
    if(a==start)
    {
        start=a->next;
        while(1)
        {
            if(a->next==NULL)
                break;
            a=a->next;
        }
        return a;
        
    }
    
    if(a->next==NULL)
    {
        a=a->previous;
        delete a->next;
        a->next=NULL;
        return a;
    }
    Node<double> *b;
    Node <double> *d;
    d=a->previous;
    b=a->next;
    a=a->previous;
    //delete a->next;
    a->next=b;
    a=a->next;
    a->previous=d;
    while(1)
    {
        if(b->next==NULL)
            break;
        b=b->next;
    }
    return b;
}



void show(Node <double> *a)
{
    if(a==NULL)
    {
        cout<<"\n\nthe queue is empty\n";
        return;
    }
    while(1)
    {
        cout<<a->data<< " ";
        if(a->next==NULL)
            break;
        a=a->next;
        
    }
}




#endif /* p10_hpp */
