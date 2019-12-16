//
//  main.cpp
//  airplane
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "airplane.hpp"

int main() {
    int n,m;
    KAL boing;
    cout<<"*** welcome to Korean Air Line ***\n\n\n"<<endl;
    while(1)
    {
        cout<<"==menu==\n\n"<<"buy [1]  ||  cacnel [2]  || status [3] || close [4]\n>>";
        cin>>n;
        if(n==1)
        {
            cout<<"No.1 : 7 A.M || No.2 : 12 P.M || No.3 5 P.M\n>>";
            cin>>m;
            boing.getseat(m);
        }
        else if(n==2)
        {
            cout<<"No.1 : 7 A.M || No.2 : 12 P.M || No.3 5 P.M\n>>";
            cin>>m;
            boing.cancelseat(m);
        }
        else if(n==3)
        {
            for(int i=1;i<4;i++)
            {
                cout<<"plane No."<<i<<" : ";
                boing.show(i);
            }
        }
        else if(n==4)
            break;
        else
            cout<<"not an option\nreenter\n\n";
    }
}
