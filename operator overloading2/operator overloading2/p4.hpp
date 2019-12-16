//
//  p4.hpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p4_hpp
#define p4_hpp

#include <iostream>
#include <cstring>
using namespace std;
class San{
private:
    char*name;
    int height;
public:
    San(){
        name=NULL;
        height=0;
    }
    San(const char *np, int h){
        name=new char(strlen(np)+1);
        name=strcpy(name, np);
        height=h;
    }
    San(const San &br){
        name=new char(strlen(br.name)+1);
        name=strcpy(name, br.name);
        height=br.height;
    }
    
    San & operator=(const San &br){
        name=new char(strlen(br.name)+1);
        name=strcpy(name, br.name);
        height=br.height;
        return *this;
    }
    int high(){
        return this->height;
        
    }
    void prn()
    {
        cout<<"name : "<<name<<endl;
        cout<<"height : "<<height<<endl;
    }
};


class SanList{
    San *list[5];
    int cnt;
public:
    SanList():cnt(0){}
    void add()
    {
        for(int i=0;i<5;i++){
        char name[20];
        int height;
        cout<<"name : ";
        cin>>name;
        cout<<"height :";
        cin>>height;
        list[cnt]=new San(name, height);
            cnt++;
            
        }
    }
    void decreasingorder(){
        San *temp;
        for(int i=0;i<5;i++){
            for(int j=i;j<5;j++)
            {
                if(list[i]->high()<list[j]->high())
                {    temp=list[i];
                    list[i]=list[j];
                    list[j]=temp;
                }
            }
        }
        
    }
    void print()
    {
        for(int i=0;i<5;i++)
            list[i]->prn();
    }
};



#endif /* p4_hpp */
