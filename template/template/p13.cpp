//
//  p13.cpp
//  template
//
//  Created by Irene Lee on 6/6/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T>

class set{
    T *list;
    int cnt;
    int max;
public:
    set(int n){
        max=n;
        cnt=0;
        list=new T[n];
    }
    void add()
    {
        if(cnt==max)
        {
            cout<<"the set is full\n";
            return;
        }
        T a;
        int i;
        
        cout<<"\nenter data : ";
        cin>>a;
        for(i=0;i<cnt;i++ )
            {if(list[i]==a)
                break;}
        if(i!=cnt){
            cout<<"\nthe data already exists\n";
            return ;
        }
        
        list[cnt++]=a;
    }
    void print()
    {
        for(int i=0;i<cnt;i++ )
            cout<<list[i]<<" ";
        cout<<endl;

    }
    
};

int main()
{
    int n;
    set <int> AAA(9);
    while(1){
        cout<<"\n\n==menu==\n1. ADD\t2. PRINT\t3.EXIT\n>>";
        cin>>n;
        if(n==1)
            AAA.add();
        else if(n==2)
            AAA.print();
        else if(n==3)
            break;
        else
            cout<<"not an option\t reenter\n";
    }
}
