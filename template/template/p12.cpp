//
//  p12.cpp
//  template
//
//  Created by Irene Lee on 6/5/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "p12.hpp"
int main()
{
    int n;
    while(1){
        cout<<"enter the type of queue you want to make==\n ";
        cout<<"1. int\t2. double\t3. string\t4. character\n>>";
        cin>>n;
        if(n==1)
        {   Queue<int> AA;
            runqueue(AA);}
        else if(n==2)
        {   Queue<double>AA;
            runqueue(AA);}
        else if(n==3)
        { Queue<string>AA;
            runqueue(AA);}
        else if(n==4)
        {  Queue<char>AA;
            runqueue(AA);}
        else
        {
            cout<<"**not an option... reenter\n";
            continue;
        }
        break;
    
        
    }
        

    
    cout<<"program ended..."<<endl;
}
