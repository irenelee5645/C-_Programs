//
//  p6.cpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p6.hpp"
int main()
{
    char a;
    controlindiv aa;
    aa.donate();
    while(1)
    {
        cout<<"\n\ncontinue ? :";
        
        fflush(stdin);
        cin>>a;
        if(a!='y')
            break;
        aa.donate();
    }
    aa.show();
    cout<<aa.calcwinner()<<" donated more"<<endl;
}
