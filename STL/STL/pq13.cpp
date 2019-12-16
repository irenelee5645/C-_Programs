//
//  pq13.cpp
//  STL
//
//  Created by Irene Lee on 6/11/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <list>
#include <iterator>

using namespace std;
void print_list(list<int>&li);
int main()
{
    list<int> my_list;
    my_list.push_back(10);
    my_list.push_back(20);
    my_list.push_back(30);
    my_list.push_back(40);
    list <int>::iterator it;
    it=my_list.begin();
    my_list.insert(it, 5);
    my_list.insert(my_list.end(), 45);
    print_list(my_list);
}

void print_list(list <int> & li)
{
    list<int>::iterator it;
    for(it=li.begin(); it!=li.end();++it)
        cout<<*it<<" ";
    cout<<endl;
}
