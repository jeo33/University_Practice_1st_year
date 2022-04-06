#pragma once
#include <iostream>
#include <vector>
#include<list>
#include<string>
using namespace std;
class Edge
{
public:
	Edge() { Start = -1; end = -1; };
	Edge(int nodeIndexA = 0, int nodeIndexB = 0) :Start(nodeIndexA),
		end(nodeIndexB), Selected(false) {}
	Edge(const Edge& edge)
	{
		if (this == &edge)
			return;
		*this = edge;
	}

	Edge& operator=(const Edge& edge)
	{
		if (this == &edge)
			return *this;
		this->Start = edge.Start;
		this->end = edge.end;
		this->Selected = edge.Selected;
		return *this;
	}

	bool operator==(const Edge& edge)
	{
		if (this->Start==edge.Start&&this->end==edge.end)
			return true;
		else 
			return false;
	}




public:
	int Start; //s
	int end; //e
	bool Selected; //selected or not
};
