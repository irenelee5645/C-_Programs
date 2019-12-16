//
//  p5.hpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p5_hpp
#define p5_hpp

#include <iostream>
using namespace std;
#include <cstring>

class Mystring{
private:
    char *str;
    int len;
public:
    Mystring()
    {
        str=NULL;
        len=0;
    }
    ~Mystring()
    {
        delete str;
    }
    Mystring(const char *cp)
    {
        len=strlen(cp)+1;
        str=new char[len];
        strcpy(str, cp);
    }
    Mystring(const Mystring &aa){
        len=aa.len;
        str=new char[len];
        strcpy(str,aa.str);
    }
    Mystring &operator=(const Mystring &aa){
        len=aa.len;
        str=new char[len];
        strcpy(str,aa.str);
        return *this;

    }
    Mystring operator+(const Mystring &aa)
    {
        len+=aa.len;
        strcat(str,aa.str);
        return *this;
    }
    bool operator>(const Mystring &aa)
    {
        return (len>aa.len?true:false);
    }
    bool operator<(const Mystring &aa)
    {
        return (len<aa.len?true:false);
    }
    void operator<<(ostream &os){
        os<<str<<endl;
    }
    void operator>>(istream &is){
        char a[30];
        is>>a;
        *this=Mystring(a);
    }
    friend ostream& operator<<(ostream &os, Mystring &aa);
    friend istream& operator>>(istream &is, Mystring &aa);

    
};

ostream& operator<<(ostream &os, Mystring &aa){
    os<<aa.str<<endl;
    return os;
}

istream& operator>>(istream &is,Mystring &aa){
    is>>aa.str;
    return is;
}


#endif /* p5_hpp */
