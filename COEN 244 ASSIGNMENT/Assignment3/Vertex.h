#pragma once

class Vertex
{

public:

	Vertex(int x,int y)					//constructor 
	{
		id = x;
		Value = y;
		visitedOrNot = false;
	}
	
	~Vertex();							//deconstructor
	Vertex(const Vertex& p1)			//copy constructor 
	{
		id = p1.id;
		Value = p1.Value;
		visitedOrNot = p1.visitedOrNot;
	}

	int id=0;//id , it's a unique number and I can not be repeated
	int Value=0;//value in each vertex,default to zero
	bool visitedOrNot=false;//for traversal


};



