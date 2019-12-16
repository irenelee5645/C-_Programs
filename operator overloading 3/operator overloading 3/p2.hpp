//
//  p2.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/6/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p2_hpp
#define p2_hpp

#include <iostream>
#include <cstring>
using namespace std;
class String{
    char *s;
    int n;
public:
    String( char * ss){
        n=strlen(ss)+1;
        s= new char[n];
        strcpy(s,ss);
    }
    String()
    {
        n=0;
        s=NULL;
    }
    String& operator+(const String &t){
        String temp(this->s);
        strcat(temp.s,t.s);
        temp.n+=t.n;
        return temp;
    }
    friend bool operator!(const String &t);
    bool operator==(const String &t){
        if(this->n==t.n)
        {
            for(int i=0;i<n;i++)
            {
                if(this->s[i]!=t.s[i])
                    return 0;
            }
            return 1;
        }
        return 0;
    }
    bool operator!=(const String &t)
    {
        return (*this==t?0:1);
    }
    
    bool operator<(const String &t)
    {
        return (this->n<t.n?true:false);
    }
    bool operator<=(const String &t)
    {
        return (this->n<=t.n?true:false);
    }
    bool operator>(const String &t)
    {
        return (this->n>t.n?true:false);
    }
    bool operator>=(const String &t)
    {
        return (this->n>=t.n?true:false);
    }
    void print()
    {
        cout<<s<<endl;
    }

};

bool operator!(const String &t){
    if(t.n==0)
        return 1;
    else
        return 0;
}

#endif /* p2_hpp */
