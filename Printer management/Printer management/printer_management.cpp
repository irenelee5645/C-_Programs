//
//  printer_management.cpp
//  Printer management
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "printer_management.hpp"

void printer::add_pages(int n)
{
    numpaper+=n;
}
void printer::print(int pages){
    if(numpaper<pages)
    {
        cout<<"\acannot print\nneed more paper to finish requested work\n\n";
    }
    else
    {
        numpaper-=pages;
        cout<<"\ndone printing\n\n";
    }
}

void printer::show(){
    cout<<model<<" "<<comp<<" has "<<numpaper<<"papers left\n";
}

void inkjet::printinkjet(int pages){
    print(pages);
    if (pages<ink) {
        ink-=pages;
    }
    
}
void laser::printlaser(int pages){
    print(pages);
    if (pages< toner) {
        toner-=pages;
    }
}
