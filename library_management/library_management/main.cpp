//
//  main.cpp
//  library_management
//
//  Created by Irene Lee on 5/29/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include "library_management.hpp"

int main() {
    int n;
    libman library;
    while(1){
        cout<<"\n\n==menu==\n";
        cout<<"1. add item\n2. find\n3. end\n>>";
        cin>>n;
        if(n==1)
        {
            library.add_item();
        }
        else if(n==2)
        {
            library.show_item();
        }
        else if(n==3)
        {
            break;
        }
        else
            cout<<"nont available\nreenter\n\n";
    }
}
