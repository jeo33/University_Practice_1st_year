#pragma once
class Robot
{
public:
	int x = 3;
	int y = 1;
	int GameMap[10][10];
	void initializeMap();
	void printMap();
	void up();
	void down();
	void left();
	void right();
	int flag = 0, step = 0;
	int hitWall = 0;
};

