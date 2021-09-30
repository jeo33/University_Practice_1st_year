#include <iostream>
#include <cmath>
#include <cstddef>
#include"linklist.h"
using namespace std;

int main()
{
     linklist a;
     int x;
     int y;
     a.insert(3);
     a.insert(4);
     a.insert(5);
     a.insert(6);
     a.insert(5);
     a.insert(6);
     a.insert(5);
     a.insert(6);
     a.print();
     while(1)
     {

         cout<<"\nwhere"<<endl;
         cin>>y;

        a.deleteelement(y);
        a.print();
     }



}
