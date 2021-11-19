#include "border.h"
#include<vector>
#include<iostream>
using namespace std;

border::border()
{
    //ctor
}

void border::printString()
{
    for(int i=0;i<Bian.size();i++)
   {

       cout<<Bian[i];
   }
   cout<<endl;

}

void border::print(int x)
{
    for(int i=0;i<(1+6*x);i++)
   {
        if((i%6)==0)Bian.push_back("+");
        else Bian.push_back("-");
   }
}



border::~border()
{
    //dtor
}
