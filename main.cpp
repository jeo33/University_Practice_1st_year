#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    string EnterString[80];

    char *start,*finish;
    int lenth;
    char t;
    cout<<"Please enter your string"<<endl;
    gets(EnterString);
    lenth=strlen(EnterString);
   start=EnterString;
   finish=&EnterString[lenth-1];
   while(start<finish)
{

    t=*start;
    *start=*finish;
    *finish=t;
    start++;
    finish--;
}
for(int i=0;i<lenth;i++)
    cout<<EnterString[i];


    return 0;
}
