//
//  p1.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/6/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p1_hpp
#define p1_hpp

#include <iostream>
using namespace std;
class set{
    int *list;
    int size;
    int cnt;
public:
    set(int n){
        cnt=0;
        size=n;
        list= new int[size];
        for(int i=0;i<size;i++)
            list[i]=0;
    }
    int& operator[](int a){
        if(a>(size-1))
        {
            cout<<"beyond the array limit\n";
            exit(1);
            
        }
        return list[a];
    }
    bool operator==(set b)
    {
        for(int i=0;i<size;i++)
        {
            if(this->list[i]!=b.list[i])
                return 0;
        }
        return 1;
    }
    
    bool operator!=(set b)
    {
        for(int i=0;i<size;i++)
        {
            if(this->list[i]!=b.list[i])
                return 1;
        }
        return 0;

    }
    void operator=(set AA)
    {
        delete list;
        size=AA.size;
        list=new int[size];
        
        for(int i=0;i<AA.size;i++)
            this->list[i]=AA.list[i];
    }
    friend ostream & operator<<(ostream &os, const set AA);
    
};


ostream & operator<<(ostream &os, const set AA){
    for(int i=0;i<AA.size;i++)
        os<<AA.list[i]<<" ";
    cout<<endl;
    return os;
}

#endif /* p1_hpp */
