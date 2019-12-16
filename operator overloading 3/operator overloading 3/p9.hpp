//
//  p9.hpp
//  operator overloading 3
//
//  Created by Irene Lee on 6/9/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#ifndef p9_hpp
#define p9_hpp

#include <iostream>
#include <string>
using namespace std;
class Employee{
    string a;
    int salary;
public:
    Employee(string aa, int s):a(aa),salary(s){};
    void display()
    {
        cout<<a<< " ; "<<salary<<endl;
    }
     operator int ()
    {
        return salary;
    }
};

#endif /* p9_hpp */
