#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"Celsius"<<" "<<"Fathrenheit"<<" "<<"Kelvin"<<endl;
    double F;
    double K;
    double c;
    for (c=1;c<=20;c++)
    {
        F=1.8*c+32;
        K=c+273.15;
        cout<<c<<"\t"<<F<<"\t    "<<K<<endl;

    }
    return 0;
}
