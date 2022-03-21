#pragma once

class Edge
{
public:
	Edge(int x, int y, int z)//constructor
	{
		Start = x;
		end = y;
		weight = z;
		bool Selected = false;
	}

	Edge(const Edge& edge)//copy constructor
	{
		if (this == &edge)
			return;
		*this = edge;
	}

public:
	int Start=0; //s
	int end=0; //e
	int weight=0;
	bool Selected=false; //selected or not
};