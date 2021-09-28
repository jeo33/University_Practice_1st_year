#include<iostream>

using namespace std;
void showbinary(int x);
int main()
{
	int num = 7;
	for (int j = 0; j < 8; j++)
	{
		showbinary(num);
		cout << "\n";
		num = num << 1;
	}
	return 0;
}

void showbinary(int x)
{
	for (int i = 16*16;i>0; i=i / 2)
	{
		if (x & i)cout << "1 ";
		else cout << "0 ";
	}

}
