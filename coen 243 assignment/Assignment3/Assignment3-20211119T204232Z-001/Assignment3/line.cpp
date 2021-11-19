#include "line.h"
#include<vector>
#include<iostream>
using namespace std;

line::line()
{

}



void line::firstLine()
{
    for(int i =0;i<column;i++)
    {
        if((i==0&&row==0)||(i==column-1&&row==column-1)||(i==0&&row==column-1)||(i==column-1&&row==0))Combined.push_back("|     ");
        else if((i+row)%2!=0)Combined.push_back("|.....");
        else Combined.push_back("|     ");
        if(i==column-1)Combined.push_back("|");

    }


        for(int i=0;i<Combined.size();i++)
        {
            std::cout<<Combined[i];
        }



}
void line::secondLine(vector<vector<int>> arr)
{
    for(int i =0;i<column;i++)
        {
        if((i==0&&row==0)||(i==column-1&&row==column-1)||(i==0&&row==column-1)||(i==column-1&&row==0))Combined_Num.push_back("| ");
        else if((i+row)%2!=0)
            {
                Combined_Num.push_back("|.");
            }
        else Combined_Num.push_back("| ");

             Combined_Num.push_back(to_string(arr[row][i]));


        if((i==0&&row==0)||(i==column-1&&row==column-1)||(i==0&&row==column-1)||(i==column-1&&row==0))Combined_Num.push_back(" ");

              else if((i+row)%2!=0)
                {
                    Combined_Num.push_back(".");
                }
            else Combined_Num.push_back(" ");

             if(i==column-1)Combined_Num.push_back("|");
            }
            cout<<endl;


    for(int i=0;i<Combined_Num.size();i++)
            {
                std::cout<<Combined_Num[i];
            }
            cout<<endl;


}

void line::lastLine()
{
    for(int i=0;i<Combined.size();i++)
        {
            std::cout<<Combined[i];
        }

}


 line::~line()
 {
 };

/*void line::NumberLine()
{


}
void line::LastLine()
{


}



        line();
        int column;
        int row;
        string SelectedComponent;
        string UnSelectedComponent;
        string Combined;
*/
