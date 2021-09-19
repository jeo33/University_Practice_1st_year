#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 char *SearcheringF(char * textpointer,char * subpointer);
int main()
{
    char TextString[]={"hen you are dead, and your disturbing eyes No more as now their stormy lashes lift "};

    cout<<"enter the text you r looking for \n";
    char SubString[80];
    char *out;
    int i=0;
    gets(SubString);
    out=SearcheringF(TextString,SubString);
    while(out[i]!=' ')
    {

        cout<<out[i];
    i++;
    }
}

 char *SearcheringF(char * textpointer,char * subpointer)
 {

     int t,l;
     char *p,*p1,*p2;
     for(t=0;textpointer[t];t++)
     {
         p=&textpointer[t];
         p1=p;
         p2=subpointer;
         while(*p2&&(*p1==*p2))
        {
            p1++;
            p2++;

        }

         if(!*p2)
         {
             cout<<"we find it \n";
             cout<<(void *)p<<endl;
             return p;
         }

     }
     cout<<"sorrys"<<endl;
     return 0;
 }
