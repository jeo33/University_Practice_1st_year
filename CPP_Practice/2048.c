#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<conio.h>


void ShowArray(int GameArray[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		printf("\n----------------------\n|");
		for (j = 0;j < 4;j++)
		{
			
				if (GameArray[i][j] > 1000) {
					printf("%d|", GameArray[i][j]);
				}
				else if (GameArray[i][j] < 10) {
					printf("   %d|", GameArray[i][j]);
				}
				else if (GameArray[i][j] < 100) {
					printf("  %d|", GameArray[i][j]);
				}
				else if (GameArray[i][j] < 1000) {
					printf(" %d|", GameArray[i][j]);
				}
		}
	}
	printf("\n----------------------\n");
}


int GenerateNewElement(int GameArray[4][4]) 
{
		int a = rand()%4;
		int b = rand()%4;
		if (GameArray[a][b] == 0)
		{
			GameArray[a][b] = 2 * (rand() % 1 + 1);
			return 1;
		}
		else {
			return 0;
		}
	}


void GetNewElementArray(int GameArray[4][4])
{
	int temp = 1;
while (temp < 2)
{
	temp = GenerateNewElement(GameArray) + 1;
}
temp = 1;
ShowArray(GameArray);
printf("\n");
}



int CheckSpaces(int GameArray[4][4]) {
	int spaces = 0;
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0;j < 4;j++)
			if (GameArray[i][j] != 0)
			{
				spaces++;
			}
			else
			{
				spaces = spaces + 0;
			}
	}
	return spaces;
}



void MoveUp(int GameArray[4][4]) 
{
	
	{
		int i, j, l, m;
	for (j= 0; j < 4;j++)
	{
		for (i = 1; i < 4; i++)
		{
			for (l = i, m = i; m > 0; l--, m--)
			{
				if (GameArray[l-1][j]>0) 
				{
					break;
				}
				else
				{
					GameArray[l - 1][j] = GameArray[l][j];
					GameArray[l][j] = 0;
				}



			}
		}
		
	}
	}

}

void MoveDown(int GameArray[4][4])
{
	
	{
		int i, j, l, m;
		for (j = 0; j < 4;j++)
		{
			for (i = 4; i > 0; i--)
			{
				for (l = i, m = i; m < 4; l++, m++)
				{
					if (GameArray[l][j] > 0)
					{
						break;
					}
					else
					{
						GameArray[l][j] = GameArray[l - 1][j];
						GameArray[l - 1][j] = 0;
					}



				}
			}

		}

	}
}


void MoveLeft(int GameArray[4][4])
{
	
	{
		int i, j, l, m;
		for (i = 0; i < 4;i++)
		{
			for (j = 1; j < 4;j++)
			{
				for (l = j, m = j; m > 0; l--, m--)
				{
					if (GameArray[i][l - 1] > 0)
					{
						break;
					}
					else
					{
						GameArray[i][l - 1] = GameArray[i][l];
						GameArray[i][l] = 0;
					}



				}
			}

		}

	}
}


void MoveRight(int GameArray[4][4])
{
	
	{
		int i, j, l, m;
		for (i = 0; i < 4;i++)
		{
			for (j = 4; j > 0;j--)
			{
				for (l = j, m = j; m < 4; l++, m++)
				{
					if (GameArray[i][l] > 0)
					{
						break;
					}
					else
					{
						GameArray[i][l] = GameArray[i][l - 1];
						GameArray[i][l - 1] = 0;
					}



				}
			}

		}

	}
}




void SumUp(int GameArray[4][4]) {
	int i, j, l, m;
	for (j = 0; j < 4;j++)
	{
		for (i = 1; i< 4; i++)
			{
				if (GameArray[i][j] == GameArray[i-1][j] && GameArray[i][j] != 0)
				{
					GameArray[i-1][j] = GameArray[i][j]+ GameArray[i][j];
					GameArray[i][j] = 0;
					break;
				}

			}


	}
}

void SumDown(int GameArray[4][4]) {
	int i, j, l, m;
	for (j = 0; j < 4;j++)
	{
		for (i = 3; i > 0; i--)
		{
			if (GameArray[i][j] == GameArray[i - 1][j] && GameArray[i][j] != 0)
			{
				GameArray[i][j] = GameArray[i-1][j] + GameArray[i-1][j];
				GameArray[i-1][j] = 0;
				break;
			}

		}


	}
}

void SumLeft(int GameArray[4][4]) {
	int i, j, l, m;
	for (i = 0; i < 4;i++)
	{
		for (j=1; j <4; j++)
		{
			if (GameArray[i][j] == GameArray[i][j-1] && GameArray[i][j] != 0)
			{
				GameArray[i][j-1] = GameArray[i][j] + GameArray[i][j];
				GameArray[i][j] = 0;
				break;
			}

		}


	}
}

void SumRight(int GameArray[4][4]) {
	int i, j, l, m;
	for (i = 0; i < 4;i++)
	{
		for (j = 3; j > 0; j--)
		{
			if (GameArray[i][j-1] == GameArray[i][j] && GameArray[i][j] != 0)
			{
				GameArray[i][j] = GameArray[i][j-1] + GameArray[i][j-1];
				GameArray[i][j-1] = 0;
				break;
			}

		}


	}
}


int CheckWin(int GameArray[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (GameArray[i][j] == 2048)
			{
				return 1;
			}
		}

	}
}

void Move(int GameArray[4][4]) {
	int ch = _getch();
	switch (ch)
	{
	case 'W':
		
		{
		MoveUp(GameArray);
		SumUp(GameArray);
		MoveUp(GameArray);
		GetNewElementArray(GameArray);
		}
		break;
	case 'w':
		
		{
			MoveUp(GameArray);
			SumUp(GameArray);
			MoveUp(GameArray);
			GetNewElementArray(GameArray);
		}
		break;
	case 'A':
		
		{ 
		MoveLeft(GameArray);
		SumLeft(GameArray);
		MoveLeft(GameArray);
		GetNewElementArray(GameArray);
		}
		break;
	case 'a':
		
		{
			MoveLeft(GameArray);
			SumLeft(GameArray);
			MoveLeft(GameArray);
			GetNewElementArray(GameArray);
		}
		break;
	case 'S':
		
		{
			MoveDown(GameArray);
			SumDown(GameArray);
			MoveDown(GameArray);
			GetNewElementArray(GameArray);
		}
		break;
	case 's':
		
		{
			MoveDown(GameArray);
			SumDown(GameArray);
			MoveDown(GameArray);
			GetNewElementArray(GameArray);
		}
		break;
	case 'D':
		
		{
			MoveRight(GameArray);
			SumRight(GameArray);
			MoveRight(GameArray);
			GetNewElementArray(GameArray);
		}
		break;
	case 'd':
		
		{
			MoveRight(GameArray);
			SumRight(GameArray);
			MoveRight(GameArray);
			GetNewElementArray(GameArray);
		}
		break;
	default:ShowArray(GameArray);
	}
}

	int main()
	{
		int cmd = 0;;
		int GameArray[4][4] = {  { 0,0,0,0 }, { 0,0,0,0 }, { 0,0,0,0 }, { 0,0,0,0 } };
		GenerateNewElement(GameArray);
		GenerateNewElement(GameArray);
		ShowArray(GameArray);
		printf("Use W A S D to move the numbers\n");
		printf("\n");
		printf("Try to get 2048\n");
		while (1)
		{
			Move(GameArray);
			if (CheckSpaces(GameArray) == 16) {
				printf("\nYou Lose\n");
				break;
			}
			else if (CheckWin(GameArray)==1)
			{
				printf("\nYou Win\n");
				break;
			}
			
		}

	}
