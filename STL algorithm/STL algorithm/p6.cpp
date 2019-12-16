//
//  p6.cpp
//  STL algorithm
//
//  Created by Irene Lee on 6/13/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <queue>
#include <iterator>
#include <ctime>    // For time()
#include <cstdlib>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int add1(const int x)
{
    return x+1;
}


int main()
{
    char c='A';
    
    queue<char> customerenter;
    queue<int> entertime;
    queue<int> service;
    queue<char> customerwait;
    queue<char> customerservice;
    vector <int> waittime;
    int w,s;
    int n=10;
    for(int i=0;i<n;i++)
    {
        customerenter.push(c);
        c++;
        w=(rand()%10)+1;
        s=(rand()%20)+1;
        entertime.push(w);
        service.push(s);
    }
    //vector<int> ::iterator it=waittime.begin();
    //vector<int> ::iterator tt=waittime.begin();
    int check=0;
    srand(time(0));
    char temp;
    cout<<"the time begins now!"<<endl;
    while(!customerenter.empty()||!customerwait.empty()||!customerservice.empty())
    {
        this_thread::sleep_for(chrono::milliseconds(200));
        cout<<setw(30)<<" . "<<endl;
        (entertime.front())--;
        if(entertime.front()==0)
        {
            cout<<"customer "<<customerenter.front()<<" enters the bank.";
            temp;
            temp=customerenter.front();
            customerenter.pop();
            entertime.pop();
            customerwait.push(temp);
            waittime.push_back(0);
        }
        if(service.front()==0)
        {
            temp=customerservice.front();
            cout<<"customer"<<temp<<" is done with the businnes and leaves...\n";
            customerservice.pop();
            service.pop();
        }
        if(customerservice.empty()&&!customerwait.empty())
        {
            temp=customerwait.front();
            cout<<"customer "<<temp<<" starts getting service..."<<endl;
            customerservice.push(temp);
            customerwait.pop();
           // it++;
            check++;
        }
        if(!customerservice.empty()){
            (service.front())--;
            
            //for_each(it, waittime.end(),add1);
            //transform(it, waittime.end(),it, bind1st(plus<int>(),1));
            int i=check;
            for( i=check;i<waittime.size();i++)
            {
                (waittime[i])++;
            }
        }
    }
    
    cout<<"the bank is closed...";
    int sum=accumulate(waittime.begin(), waittime.end(), 0);
    cout<<"\n\n the average waittime is "<<(double)sum/n<<"minutes .\n";
    
}
        
