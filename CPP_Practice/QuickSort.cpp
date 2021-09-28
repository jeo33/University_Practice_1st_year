#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void QuickSort(char *inputString, int left, int right);
void QS(char* inputString, int lenth);

int main()
{
	char EnterString[80];
	cout << "enter the string" << endl;
	cin.getline(EnterString,strlen(EnterString));
	cout << "origional order" << "\n"<<EnterString<< endl;
	int left, right;
	int i = 0;
	left = 0;
	right = strlen(EnterString)-1;
	QS(EnterString, right);
	
	
		cout << EnterString;

	
	return 0;

}

void QS(char* inputString, int lenth)
{
	QuickSort(inputString, 0, lenth);
}

void QuickSort(char* inputString, int left, int right)
{
	int i, j,t;
	char x, y;
	i = left;
	j = right;
	x = inputString[(i + j) / 2];
	do {
		while((i < right) && (inputString[i] < x)) i++;
		while((j > left) &&( inputString[j] > x))j--;
		if (i <= j)
		{
			y = inputString[i];
			inputString[i] = inputString[j];
			inputString[j] = y;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > left)QuickSort(inputString, left, j);
	if (i < right)QuickSort(inputString, i, right);


}

