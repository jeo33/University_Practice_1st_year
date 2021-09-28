#include <iostream>

using namespace std;
int main()
{
    cout<<"please enter 3 integers\n"<<endl;
    int a[3];
    cout<<"please enter first integer\n"<<endl;
    cin>>a[0];
    cout<<"please enter second integer\n"<<endl;
    cin>>a[1];
    cout<<"please enter third integer\n"<<endl;
    cin>>a[2];
    int t=0;

    for(int i=0;i<3;i++)
        {
            for(int j=i;j<3;j++)
                if(a[i]>a[j])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
        }

    for(int i=0;i<3;i++)cout<<a[i]<<"\t";


}
