//
//  p12.cpp
//  STL
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <queue>
#include <iterator>
using namespace std;

int main()
{
    queue<string> boylist;
    queue<string> girlist;
    char c;
    string s;
    char g;
    while(1)
    {
        cout<<"enter name : ";
            fflush(stdin);
            cin>>s;
        cout<<"enter gender (f/m) : ";
            fflush(stdin);
        cin>>g;
            if(g=='f')
            {
                girlist.push(s);
                if(boylist.empty())
                    cout<<"no match yet. please wait.";
                else
                {
                    cout<<girlist.front()<<" and "<<boylist.front()<<" became a coupel!!\n";
                    girlist.pop();
                    boylist.pop();
                }
            }
            else if(g=='m')
            {
                boylist.push(s);
                if(girlist.empty())
                    cout<<"no match yet. please wait.";
                else
                {
                    cout<<girlist.front()<<" and "<<boylist.front()<<" became a coupel!!\n";
                    girlist.pop();
                    boylist.pop();
                }

            }
            else
                cout<<"reenter..\n";
        cout<<"continue(y/n)?";
        fflush(stdin);
        c=getchar();
        if(c!='y')
            break;
        
        
        
    }
    
    
}

