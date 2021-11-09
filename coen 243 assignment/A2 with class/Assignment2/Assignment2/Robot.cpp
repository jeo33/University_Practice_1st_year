#include "Robot.h"
#include<iostream>


	void Robot:: up()
	{
		if (x != 0) {
			x--;
			GameMap[x][y]++;
			step++;
		}
		else hitWall++;
	}

	void Robot::down()
	{
		if (x != 9) {
			x++;
			GameMap[x][y]++;
			step++;
		}
		else hitWall++;
	}

	void Robot::left()
	{
		if (y != 0)
		{
			y--;
			GameMap[x][y]++;
			step++;
		}
		else hitWall++;
	}

	void Robot::right()
	{
		if (y != 9) {
			y++;
			GameMap[x][y]++;
			step++;
		}
		else hitWall++;
	}



	void Robot::initializeMap()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				GameMap[i][j] = 0;
			}
		}
	}



	void Robot::printMap()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				
				
				if (i == 3 && j == 1)
				{
					if (x != 3|| y != 1)std::cout << "* ";
					else
					{
						flag == 1 ? std::cout << "X " : std::cout << "R ";
					}
				}
				else if (GameMap[i][j] == -1 && flag == 1)std::cout << "X ";
				else if (GameMap[i][j] == -1 && flag == 0)std::cout << "R ";
				else if (GameMap[i][j] > 0)std::cout << GameMap[i][j] << " ";
				else std::cout << ". ";
				
			}
			std::cout << std::endl;
		}
	}


