#include <iostream>
#include <cmath>
using namespace std;
/*
because both tax rate(common difference=7%) and tax stage range(common difference=30000) are arithmetic sequence;
tax_stage_5:117000 above   tax_stage_4_upperlimit+30000
tax_stage_4:87000~117000   tax_stage_3_upperlimit+30000
tax_stage_3:57000~87000    tax_stage_2_upperlimit+30000
tax_stage_2:27000~57000    tax_stage_1_upperlimit+30000
tax_stage_1:0~27000

This distribution can be abstract by a function:
30000*(tax_rate[0]+tax_rate[1]+tax_rate[i-1])+(total_income-tax_stage_(i-1)_upperlimit)*tax_rate[i-1];

eg. 97000 is the income;

(97000-27000)/30000=2;(if income<27000 , we default tax value=0)
because we minus 27000 and the integer / operand result is 2;

tax_stage_4:87000~117000        97000-87000
tax_stage_3:57000~87000         30000
tax_stage_2:27000~57000         30000
tax_stage_1:                    0

which means it covers up to stage 4 but it's lower than stage 5;
30000*(0+7%+14%)+(97000-87000)*21%=8400;

*/


int getTaxRange(double x);
void calculateTax(int x,double *PointerToTax,double IncomeBeforeTaxe);


int main()
{   double IncomeBeforeTaxe,NetIncome;
    int temp;
    double tax=0;
    double *p=&tax;
    cout<<"Please enter your income "<<endl;
    cin>>IncomeBeforeTaxe;
    temp=getTaxRange(IncomeBeforeTaxe);
    calculateTax(temp,p,IncomeBeforeTaxe);
    cout<<"\nYour income is:      "<<IncomeBeforeTaxe<<endl;
    cout<<"Your tax is:         "<<tax<<endl;
    cout<<"Your net income is:  "<<IncomeBeforeTaxe-tax<<endl;

    return 0;

}


int getTaxRange(double x)
{
    int z;
    if(x<27000)
    {
        z=0;
    }
    else
    {
        z=1+((int)x-27000)/30000;
    }
        return z;
}


void calculateTax(int x,double *p,double IncomeBeforeTaxe)
{
    int i=0;
    (*p)+=(IncomeBeforeTaxe-(27000+30000*(x-1)))*(0.07*x);
    for(double i=0;i<x;i++)
    {
        (*p)+=30000.0*(0.07*i);
    }
}




