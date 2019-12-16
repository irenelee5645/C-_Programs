//
//  pq12.cpp
//  STL
//
//  Created by Irene Lee on 6/11/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    queue<int> qu;
    qu.push(100);
    qu.push(200);
    qu.push(300);
    while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
        
    }
        
}
