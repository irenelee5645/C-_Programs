//
//  q2.cpp
//  operator overloading
//
//  Created by Irene Lee on 5/31/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "q2.hpp"
int main()
{
    Num a(10),b(30);
    Num c;
    c=a+b-100*b/3;
    c=2*b*3;
    c.show();
}
