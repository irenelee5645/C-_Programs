//
//  p6.cpp
//  string class
//
//  Created by Irene Lee on 6/7/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,finds,rs;
    char cc;
    cc=getchar();
    while(1){
        if(cc=='&')
            break;
        string b(1,cc);
        a.append(b);
        cc=getchar();

    }
    cout<<"find =>";
    cin>>finds;
    if(a.find(finds)==-1)
        cout<<"not found"<<endl;
    else
    {
        cout<<"replace : ";
        fflush(stdin);
        cin>>rs;
        a.replace(a.find(finds), finds.size(), rs);
    }
    cout<<a<<endl;
        
}
