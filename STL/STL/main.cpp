//
//  main.cpp
//  STL
//
//  Created by Irene Lee on 6/11/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
void output(const string &s){cout<<s<<" ";}
int main()
{
    /*string s1[4]={"fine","fish", "fashion","fate"};
    string s2[2]={"busy","bats"};
    string s3[2]={"silly","singers"};
    vector<string> words(4);
    copy(s1,s1+4,words.begin());
    for_each(words.begin(), words.end(), output);
    cout<<endl;
    
    //copy(s2,s2+2,back_insert_iterator<vector<string>>(words));
    copy(s2,s2+2,words.end());
    
    //for_each(words.begin(),words.end(),output);
    cout<<endl;
    
    copy(s3,s3+2,insert_iterator<vector<string>>(words,words.begin()+2));
    for_each(words.begin(),words.end(),output);
    cout<<endl;*/
    
   /* multimap <int, string> codes;
    codes.insert(make_pair(718," San Francisco"));
    codes.insert(make_pair(718," steven "));

    pair<multimap<int,string>::iterator,multimap<int,string>::iterator> range = codes.equal_range(718);
    multimap<int, string>:: iterator it;
    for(it=range.first; it!=range.second;++it)
        cout<<(*it).second<<endl;*/
    priority_queue<int> pq;
    pq.push(100);
    pq.push(300);
    pq.push(200);

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
}
