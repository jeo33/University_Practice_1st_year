#include<iostream>

using namespace std;
void showbinary(int x);
unsigned char lrotate(char x,int n);
unsigned char rrotate(char x, int n);
int main()
{
	char ch = 'x';
	for (int i = 0; i < 8; i++)
	{
		ch = lrotate(ch, 1);
		showbinary(ch);
	
	}
	cout << "********************************\n";
	for (int i = 0; i < 8; i++)
	{
		
		ch = rrotate(ch, 1);
		showbinary(ch);
	}

	return 0;
}

void showbinary(int x)
{
	for (int i = 128;i>0; i=i / 2)
	{
		if (x & i)cout << "1 ";
		else cout << "0 ";
	}
	cout << "\n";

}

unsigned char lrotate(char x,int n)
{
	unsigned int t = x;
	for (int i = 0; i < n; i++)
	{
		t = t << 1;
		if (t & 256)t = t | 1;
	}
	return t;

}

unsigned char rrotate(char x, int n)
{
	unsigned int t = x;
	t = t << 8;
	for (int i = 0; i < n; i++)
	{
		t = t >> 1;
		if (t & 128)t = t | 32768;
	}
	t = t >> 8;
	return t;

}
