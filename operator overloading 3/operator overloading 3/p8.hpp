//
//  p8.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/9/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p8_hpp
#define p8_hpp

#include <string>
#include <iostream>
using namespace std;

class SymbolTable{
    int list[10];
    string lists[10];
    int count;
public:
    SymbolTable()
    {
        count=0;
    }
    int operator[](string A)
    {
        for(int i=0;i<count;i++)
        {
            if(lists[i]==A)
                return list[i];
        }
        return 0;
    }
    
    void add(string a,int n ){
        list[count]=n;
        lists[count]=a;
        count++;
    }
    void del(string A){
        for(int i=0;i<count;i++)
        {
            if(lists[i]==A)
            {
                for(int j=i+1;j<count;j++)
                {
                    list[j-1]=list[j];
                    lists[j-1]=list[j];
                    return;
                }
            }
            
        }
        cout<<"not found"<<endl;
        return ;

    }
};

#endif /* p8_hpp */
