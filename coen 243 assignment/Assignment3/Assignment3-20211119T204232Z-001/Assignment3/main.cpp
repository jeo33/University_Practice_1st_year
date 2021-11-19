#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#include"line.h"
#include"number.h"
#include"border.h"
using namespace std;

int main()
{
    number input;
    border borderLine;

    vector<vector<int>> num=input.inputNum();//get input number list;

    borderLine.border_size=input.width;



    borderLine.print(input.width);
    borderLine.printString();
    for(int i=0;i<input.width;i++)
    {

        line FillLine(i,input.width);
            FillLine.firstLine();
            FillLine.secondLine(num);
            FillLine.lastLine();
            cout<<endl;
         if(i!=input.width-1) borderLine.printString();
    }
borderLine.printString();

int sum=0;

cout<<endl;

for(int i=0;i<input.width;i++)
       {
             for(int j=0;j<input.width;j++)
             {

                  if((i==0&&j==0)||(i==input.width-1&&j==input.width-1)||(i==0&&j==input.width-1)||(i==input.width-1&&j==0));

                  else if((i+j)%2!=0)
                    {

                      sum+=num[i][j];

                    }

             }
       };

       cout<<sum<<"=";

for(int i=0;i<input.width;i++)
       {
             for(int j=0;j<input.width;j++)
             {

                  if((i==0&&j==0)||(i==input.width-1&&j==input.width-1)||(i==0&&j==input.width-1)||(i==input.width-1&&j==0));

                  else if((i+j)%2!=0)
                    {

                      if(i==0&&j==1)cout<<num[i][j];

                      else cout<<"+"<<num[i][j];

                    }


             }
       };

cout<<endl;



//vector<vector<int>> numbers(width,vector<int>(width));

/*
883 646 711 358 869 353 720 403 921 347 166 471 678 229 805 165 384 426 782 686 448 669 754 370 960

*/

/*
   line there(sqrt(num),0);
vector<vector<int>> numbers(sqrt(num),vector<int>(sqrt(num)));
vector<string> border;


   for(int i=0;i<sqrt(num);i++)
   {
         for(int j=0;j<sqrt(num);j++)
         {

             numbers[i][j]=sum[i*sqrt(num)+j];

         }
   };

        there.firstLine();
                cout<<endl;
        there.secondLine(numbers);
        cout<<endl;
        there.lastLine();
cout<<endl;

/*for(int i=0;i<there.Combined.size();i++)
{


    cout<<there.Combined[i];
}
cout<<"\n"<<there.Combined.size();





      for(int i=0;i<(1+6*sqrt(num));i++)
   {
        if((i%6)==0)border.push_back("+");
        else border.push_back("-");
   }
   for(int i=0;i<border.size();i++)
   {

       cout<<border[i];
   }


*/
    return 0;
}

/*
111 222 333 444 555 666 777 888 999 131 111 222 333 444 555 666 111 222 333 444 555 666 777 888 999 131 111 222 333 444 555 666 111 222 333 444 555 666 777 888 999 131 111 222 333 444 555 666
*/



