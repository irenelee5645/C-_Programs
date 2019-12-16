//
//  p10.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p10.hpp"

int main()
{
    int n,m;
    while(1){
        cout<<"choose the type of list\n1. integer\t2. double\n>>";
        cin>>n;
        if(n==1)
        {
            Node <int> *a=NULL;
            Node <int> *b=NULL;
            while(1)
                
{            cout<<"\n\n==menu==\n1. add\n2. delete\n3. show all\n4. end\n>>";
            cin>>m;
            if(m==1)
            {
                if(a==NULL)
                    b=(addnode(a));
                else
                    b=(addnode(b));

            }
            else if (m==2)
                b=(deletenode(a));
            else if(m==3)
                show(a);
            else if(m==4)
                break;
            else
                cout<<"\nnot an option"<<endl;
}
            break;
        }
        else if(n==2)
        {
            
            Node <double> *a=NULL;
            Node <double> *b=NULL;
            while(1)
            {cout<<"\n\n==menu==\n1. add\n2. delete\n3. show all\n4. end\n>>";
            cin>>m;
            if(m==1)
            {
                if(a==NULL)
                    b=(addnode(a));
                else
                    b=(addnode(b));
                
            }
            else if (m==2)
                b=deletenode(a);
            else if(m==3)
                show(a);
            else if(m==4)
                break;
            else
                cout<<"\nnot an option"<<endl;
                
            }
            break;

        }
        else if(n==3)
            break;
        else
            cout<<"not an options\n";
    }
    cout<<"program closing"<<endl;
}
