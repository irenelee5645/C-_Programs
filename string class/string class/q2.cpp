//
//  q2.cpp
//  string class
//
//  Created by Irene Lee on 6/7/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream fin;
    //fin.open("Macintosh_HD⁩/Users⁩/irene⁩/Documents⁩/Data⁩/text1.txt");
    fin.open("/Users/irene/Documents/Data/text1.txt");
    if(fin.is_open()==false){
        cerr<<"cannot open the file.\n";
        exit(0);
    }
    string item;
    int count=0;
    getline(fin, item, '\n');
    while(fin){
        ++count;
        cout<<count<<": "<<item<<endl;
        getline(fin,item,'\n');
        
    }
    cout<<"ending progra.\n";
    fin.close();
    return 0;
}
