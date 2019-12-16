//
//  q9.cpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "q9.hpp"
int main(){
    cout<<"enter coordinates"<<endl;
    Points aa(get_points()),bb(get_points());
    cout<<"the points entered are : \n"<<aa<<bb<<endl;
    Points cc;
    cc=aa+bb;
    cout<<"added : "<<cc<<endl;
    cc=aa-bb;
    cout<<"subtracted : "<<cc<<endl;
    cc=aa*bb;
    cout<<"multiplied : "<<cc<<endl;
    cc=aa/bb;
    cout<<"divided : "<<cc<<endl;

    
}
