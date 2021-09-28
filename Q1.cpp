#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num_1;
    int num_2;
    cout<<"Enter the first number: ";
    cin>>num_1;
    cout<<"Enter the second number: ";
    cin>>num_2;

    cout<<"\n**********"<<endl;
    cout<<"\nDifference:         "<<((num_1>=num_2)?(num_1-num_2):(num_2-num_1))<<endl;
    cout<<"Sum:                "<<(num_1+num_2)<<endl;
    cout<<"Area of an Ellipse: "<<(int)(num_1*num_2*M_PI)<<endl;
    try{
            if(num_2==0)
                throw 0;
            else
            cout<<"Division:           "<<num_1/num_2<<endl;
        }catch(int x)
        {
            cout<<"Division:           "<<"ERROR : second number is "<<x<<endl;
        }
    cout<<"Average:            "<<(num_1+num_2)/2<<endl;

    return 0;


}
