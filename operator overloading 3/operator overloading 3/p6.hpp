//
//  p6.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/9/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p6_hpp
#define p6_hpp

#include <iostream>
using namespace std;

class Set{
    int list[10];
    int count;
public:
    Set(){
        count=0;
    }
    Set& operator+(int a)
    {
        int i;
        for( i=0;i<count;i++)
        {
            if(a==list[i])
            {
                cout<<"repeated"<<endl;
                return *this;
            }
        }
        this->list[count++]=a;
        return *this;
    }
    Set& operator-(int a){
        
        int i;
        for( i=0;i<count;i++)
        {
            if(a==list[i])
            {
                for(int j=i+1;j<count;j++)
                {
                    list[j-1]=list[j];
                }
                count--;
                return *this;
            }
        }
        cout<< a <<" is not found"<<endl;
        return *this;
    }
    friend Set& operator |(Set &a,Set &b);
    friend Set& operator &(Set &a,Set &b);
    friend bool operator ==(Set &a,Set &b);
    friend ostream& operator<<(ostream & os, Set &a);
    friend istream& operator>>(istream & iss, Set &a);
    /*Set& operator=(Set &cc)
    {
        for(int i=0;i<cc.count;i++)
            *this=*this+cc.list[i];
        return *this;
    }*/

    
};



Set& operator &(Set &a,Set &b){
    Set temp;
    for(int i=0;i<a.count;i++)
    {
        for(int j=0;j<b.count;j++)
        {
            if(a.list[i]==b.list[j])
            {
                temp=temp+a.list[i];
            }
        }
    }
    return temp;
    
}
 Set& operator| (Set &a,Set &b)
{
    Set temp;
    for(int i=0;i<a.count;i++){
        temp=temp+a.list[i];
    }
    int c=temp.count;
    int j;
    for(int i=0;i<b.count;i++)
    {
        for( j=0;j<c;j++)
        {
            if(b.list[i]==temp.list[j])
                break;
            
        }
        if(j==c)
            temp=temp+b.list[i];
    }
    return temp;
    
}
 bool operator ==(Set &a,Set &b)
{
    if(a.count!=b.count)
        return false;
    for(int i=0;i<a.count;i++)
        {if(a.list[i]!=b.list[i])
            return false;}
    return true;
}
ostream& operator<<(ostream & os, Set &a){
    os<<"{ ";
    for(int i=0;i<a.count;i++)
        os<<a.list[i]<<" ";
    os<<"}";
    os<<endl;
    return os;
}
istream& operator>>(istream & iss, Set &a){
    int c;
    iss>>c;
    a=a+c;
    return iss;
}

#endif /* p6_hpp */
