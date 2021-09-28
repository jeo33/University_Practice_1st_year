#include <iostream>

using namespace std;
int main()
{
    int input;
    int data[6]={40, 58, 93, 95, 56, 80};
    cout<<"Please enter an integer\n";
    cin>>input;

    for(int i=0;i<=5;i++)
        {
            if(data[i]==input)
                {
                    cout<<"\n"<<input<<" is one of the following numbers{40, 58, 93, 95, 56, 80}"<<endl;
                    break;
                }
            else if(i==5)
                {
                    cout<<"\n"<<input<<" is not one of the following numbers{40, 58, 93, 95, 56, 80}"<<endl;
                }
        }
}
