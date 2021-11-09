#include<iostream>
#include<string>
#include"Robot.h"
using namespace std;


int main()
{
	
		Robot robot;
		std::string inputString;
		char ch;
		int i = 0;
		robot.initializeMap();
		std::cout << "Please enter a string of 'w',''a',''s','d' to move the robot" << std::endl;
		std::cin >> inputString;
		std::cout << std::endl;
		while (i < inputString.length())
		{
			switch (inputString[i])
			{
			case 'w':
				robot.up();
				break;
			case 'a':
				robot.left();
				break;
			case 's':
				robot.down();
				break;
			case 'd':
				robot.right();
				break;
			}

			if (robot.GameMap[robot.x][robot.y] < 10)i++;
			else
			{
				robot.flag = 1;
				break;
			}
		}
		robot.GameMap[robot.x][robot.y] = -1;
		robot.printMap();
		std::cout << "\n" << "Totall " << inputString.length() << " commands\n";
		std::cout << "\n" << "We took " << robot.step << " steps\n";

		std::cout << "\n" << "Robot hits wall " << robot.hitWall << " time\n\n";


}


