#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void displayfunction(char *p,int l);
int main()
{
    char EnterString[80];
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
displayfunction(EnterString,lenth);

    return 0;
}

void displayfunction(char *p,int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<p[i];
    }
}
