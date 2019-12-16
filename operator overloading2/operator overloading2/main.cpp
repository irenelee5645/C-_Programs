//
//  main.cpp
//  operator overloading2
//
//  Created by Irene Lee on 6/4/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <cstring>
namespace myistream{
    class mycin{
    public:
        mycin& operator>>(char &a){scanf("%c",&a); return *this;}
        mycin& operator>>(int &a){scanf("%d",&a); return *this;}
        mycin& operator>>(double &a){scanf("%lf",&a); return *this;}
        mycin& operator>>(char *a){scanf("%c",a); return *this;}
    };
    mycin cin;
}



int main()
{
    using myistream::cin;
    int a;
    double b;
    cin>>a>>b;
    std::cout<<a<<" "<<b;
}
