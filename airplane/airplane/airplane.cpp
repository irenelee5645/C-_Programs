//
//  airplane.cpp
//  airplane
//
//  Created by Irene Lee on 5/28/19.
//  Copyright © 2019 Irene Lee. All rights reserved.
//

#include "airplane.hpp"
void plane::show(){
    for(int i=0;i<10;i++)
    {
        if(reserved[i]==NULL)
            cout<<setw(5)<<" ____";
        else
            cout<<" "<<reserved[i]<<" ";
        
    }
    cout<<"\n\n";
}

void plane::getseat(){
    int seatnum;
    char name[30];
    int i;
    cout<<"\n\n==reserve seats==\n\n";
    show();
    for(i=0;i<10;i++)
    {
        if(reserved[i]==NULL)
            break;
    }

    while(i!=10)
    {
        
        cout<<"seat number : ";
        cin>>seatnum;
        seatnum--;
        if(seatnum<0 || seatnum>9)
        {cout<<"seat not available\nchoose another\n\n";}
        else if(reserved[seatnum]!=NULL)
            {cout<<"the seat has been already reserved\nchoose another seat\n\n";}
        else
        {
            cout<<"name : ";
            cin>>name;
            reserved[seatnum]=new char[sizeof(name)+1];
            strcpy(reserved[seatnum],name);
            cout<<reserved[seatnum]<<"  done";
            break;
        }
    }
}

void plane::cancelseat(){
    int seatnum;
    int i;
    cout<<"\n\n==cancel reservation==\n\n";
    show();
    for(i=0;i<10;i++)
    {
        if(reserved[i]!=NULL)
            break;
    }
    while(i!=10)
    {
        
        cout<<"seat number : ";
        cin>>seatnum;
        seatnum--;
        if(seatnum<0 || seatnum>9)
        {cout<<"seat not available\nchoose another\n\n";}
        else if(reserved[seatnum]==NULL)
        {cout<<"the seat is already empty\nchoose another seat\n\n";}
        else
        {
            delete [] reserved[seatnum];
            reserved[seatnum]=NULL;
            break;}
        
    }
    
    
}

void KAL::getseat(int planenum)
{
    list[--planenum]->plane::getseat();
}
void KAL::cancelseat(int planenum)
{
    list[--planenum]->plane::cancelseat();

}
void KAL::show(int planenum)
{
    list[--planenum]->plane::show();
}
