//
//  p9.cpp
//  string class
//
//  Created by Irene Lee on 6/7/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
//#include <chrono>
//#include <thread>
#include <unistd.h>
using namespace std;

void playgame(string Answer);

int main()
{
    int n,r;
    r=0;
    cout<<"                         ";
    for(int i=0;i<3;i++)
    {
        cout<<". ";
        //std::this_thread::sleep_for((1000ns));
        usleep(500000);
    }
    cout<<"\n                   **Guess the word!!**\n";
    cout<<"\n                   press enter to start\n";
    n=getchar();
    
    while(1)
    {
        string a;
        r++;
        cout<<"==================== round "<<r<<" ===================\n";
        cout<<"player one, please select the word to guess :\n";
        fflush(stdin);
        cin>>a;
        if(a.size()==0)
            cin>>a;
        for(int i=0;i<50;i++)
            cout<<endl;
        cout<<"\nbeginning the game.\nIt is time for player 2 to start guessing!!\n\n";
        cout<<"                         ";

        for(int i=0;i<3;i++)
        {
            cout<<". ";
            //std::this_thread::sleep_for((1000ns));
            usleep(500000);

        }
        cout<<endl;
        playgame(a);
        cout<<"\n\nto play again, enter 'y' : ";
        n=getchar();
        n=getchar();

        if(n!='y')
            break;
    }
    cout<<"\n\nthe program is closing...\n\n\n\n\n\n";
    
}

void playgame(string Answer)
{
    string Guess(Answer.size(),'_');
    int cnt=Answer.size();
    int lives=4;
    int check=0;
    char g;
    while(1)
    {
        
        
        if(cnt==0)
        {
            cout<<"You got it! great job!";
            return;
        }
        if(check==1)
            cout<<"good! you are one step closer.\n";
        check=0;
        if(lives==0)
        {
            cout<<"you used all your lives.\nYou Lost......";
            return;
        }
        cout<<"you have "<<lives<<" lives left\n\n";
        
        for(int i=0;i<Answer.size();i++)
            cout<<Guess[i]<<" ";
        cout<<endl;
        cout<<"guess an alphabet : ";
        cin>>g;
        for(int i=0;i<Answer.size();i++)
        {
            if(Answer[i]==g)
            {
                Guess[i]=g;
                cnt--;
                check=1;
            }
        }
        cout<<"\n\n";
        if(check==0)
        { cout<<"Nope...\nlet's try this again\n\n";
            lives--;}
        
    }

}
