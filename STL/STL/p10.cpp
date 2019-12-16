//
//  p10.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p10.hpp"
int main()
{
    list <Book> myclass;
    int n;
    while(1){
        cout<<"\n\n==menu\n1. add\n2. search\n3. delete\n4. end\n>>";
        cin>>n;
        if(n==1)
            adds(myclass);
        else if(n==2)
            searchs(myclass);
        else if(n==3)
            deletes(myclass);
        else if(n==4)
            break;
        else
            cout<<" not an option...\n";
    }
    cout<<"program closed...\n\n\n";
    
}
