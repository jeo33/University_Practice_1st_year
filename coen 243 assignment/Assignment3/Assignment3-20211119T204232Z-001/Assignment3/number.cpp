#include "number.h"
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;

number::number()
{
    //ctor
}

vector<vector<int>> number::inputNum()
{   int num;
    while(cin>>num)
       {
           NumberList.push_back(num);
           char ch=getchar();
           if(ch=='\n')break;

       }
   counts=NumberList.size();
   cout<<"\n";
   width=sqrt(counts);
   vector<vector<int>> numbers(width,vector<int>(width));


 for(int i=0;i<width;i++)
       {
             for(int j=0;j<width;j++)
             {

                 numbers[i][j]=NumberList[i*width+j];

             }
       };
   cout<<"\n";
   return numbers;
}




number::~number()
{
    //dtor
}
