//
//  p6.hpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p6_hpp
#define p6_hpp

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class controlindiv;
class indiv{
    int money;
    string name;
    int dontot;
public:
    indiv(int a, string myname):money(a), name(myname),dontot(0){}
    string getname(){return name;};
    friend void operator+(indiv &a, int b);
    friend void operator-(indiv &a, int b);
    friend controlindiv;
    void prnt(){
        cout<<name<<" has donated total "<<dontot<<"won"<<endl;
    }
    

};

void operator+(indiv &a, int b){
    a.money+=b;
}
void operator-(indiv &a, int b){
    if(b>a.money)
    {
        cout<<"not enought money..."<<endl;
        return;
    }
    a.money-=b;
    a.dontot+=b;
}


class controlindiv{
    indiv *list[2];

public:
    controlindiv()
    {
        int a;
        cout<<"before donation...\n";
        cout<<"Amy's deposit : ";
        cin>>a;
        list[0]=new indiv(a, "Amy");
        cout<<"Charles's deposit : ";
        cin>>a;
        list[1]=new indiv(a, "Charles");
    }
    
    void donate()
    {
        int a;
        cout<<"how much should they donate? : \n";
        for(int i=0;i<2;i++){
            cout<<list[i]->getname()<<" : ";
            cin>>a;
            *list[i]-a;
        }
        
    }
    void show()
    {
        for(int i=0;i<2;i++)
            list[i]->prnt();
    }
    
    string calcwinner()
    {
        if(list[0]->dontot>list[1]->dontot)
            return list[0]->name;
        else
            return list[1]->name;
            
    }
};


#endif /* p6_hpp */
