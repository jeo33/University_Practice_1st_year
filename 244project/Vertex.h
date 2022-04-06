

#pragma once
#include <iostream>
#include <vector>
#include<list>
#include<string>
using namespace std;
class Vertex
{
public:

	Vertex() {};

	Vertex(int x, string y)
	{
		Value = y;
		id = x;
		visitedOrNot = false;
	}

	Vertex(const Vertex& v)//C CONSTRUCTOT
	{
		if (this == &v) return;
		*this = v;
	}

	bool operator==(const Vertex& v)
	{
		if (this->Value == v.Value && this->id == v.id)
			return true;
		else
			return false;
	}

	Vertex& operator=(const Vertex& v)
	{
		if (this == &v)
			return *this;
		this->Value = v.Value;
		this->id = v.id;
		this->visitedOrNot = v.visitedOrNot;
		return *this;
	}
	int id;
	string Value;
	bool visitedOrNot;
};