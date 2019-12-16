//
//  p12.hpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p12_hpp
#define p12_hpp

#include <iostream>
#include <string>
using namespace std;


template<class T>
class Queue{
    int start;
    T *a;
    int end;
    int length;
public:
    Queue(){
        a=NULL;
        start=0;
        end=0;
    }
    void enqueue(){
        T b;
        if(a==NULL){
            cout<<"setting up a new queue\nenter the size of the queue you want : ";
            cin>>length;
            a=new T[length];
            start=0;
            end=0;
            cout<<"enter item : ";
            cin>>b;
            a[end]=b;
            return;
        }
        if((start==0 && end==length-1) ||(start-end)==1)
        {
            cout<<"the queue is full...";
            return;
        }
        if(end==length-1)
        {
            end=0;
            cout<<"enter item : ";
            cin>>a[end];
            
        }
        else
        {
            cout<<"enter item : ";
            cin>>a[++end];
        }
    }
    
    void dequeue()
    {
        if(a==NULL)
        {
            cout<<"\nthe queue is empty...";
            return;
        }
        if(start==end)
        {
            cout<<"deleting "<<a[start];
            delete[] a;
            a=NULL;
            cout<<"\nnow the queue is empty\nrestarting a queue...";
        }
        else if(start==length-1)
            {
                cout<<"deleting "<<a[start];
                start=0;
            }
        else{
            cout<<"deleting "<<a[start++];
        }
        
        
    }
    
    void show()
    {
        if(a==NULL)
        {
            cout<<"the queue is empty...\n";
            return;
        }
        int cnt=1;
        for(int i=start;i<length;i++)
        {    cout<<cnt<<" ) "<<a[i]<<endl;
            cnt++;
            if(start==end ||i==end)
                return;
            
        }
        
        for(int i=0;i<=end;i++){
            cout<<cnt<<" ) "<<a[i]<<endl;
            cnt++;
        }
    }
};

void runqueue(Queue<int> &BB)
{
    int n;
    while(1){
        cout<<"\n\n==menu==\n1. enter\n2. delete\n3. show\n4. end\n>>";
        cin>>n;
        if(n==1)
            BB.enqueue();
        else if(n==2)
            BB.dequeue();
        else if(n==3)
            BB.show();
        else if(n==4)
            break;
    }
}
void runqueue(Queue<char> &BB)
{
    int n;
    while(1){
        cout<<"\n\n==menu==\n1. enter\n2. delete\n3. show\n4. end\n>>";
        cin>>n;
        if(n==1)
            BB.enqueue();
        else if(n==2)
            BB.dequeue();
        else if(n==3)
            BB.show();
        else if(n==4)
            break;
    }
}
void runqueue(Queue<double> &BB)
{
    int n;
    while(1){
        cout<<"\n\n==menu==\n1. enter\n2. delete\n3. show\n4. end\n>>";
        cin>>n;
        if(n==1)
            BB.enqueue();
        else if(n==2)
            BB.dequeue();
        else if(n==3)
            BB.show();
        else if(n==4)
            break;
    }
}
void runqueue(Queue<string> &BB)
{
    int n;
    while(1){
        cout<<"\n\n==menu==\n1. enter\n2. delete\n3. show\n4. end\n>>";
        cin>>n;
        if(n==1)
            BB.enqueue();
        else if(n==2)
            BB.dequeue();
        else if(n==3)
            BB.show();
        else if(n==4)
            break;
    }
}


#endif /* p12_hpp */
