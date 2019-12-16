//
//  p8.cpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/9/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p8.hpp"
int main(){
    SymbolTable table;
    table.add("house", 100);
    table.add("mouse", 200);
    table.add("Korea", 300);
    table.del("mouse");
    cout<<table["house"]<<endl;
    
}
