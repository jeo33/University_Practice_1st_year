#pragma once
#include <iostream>
#include <vector>
#include<list>
#include<string>
#include"Edge.h"
#include"Vertex.h"
#include"Graph.h"
#include"UndirectedGraph.h"
using namespace std;
class menu
{public:




	int keyLoop = 1;
	int jj = 0;
	int GraphSelect;
	Graph* G = new Graph();
	UndirectedGraph* g = new UndirectedGraph();
	void drive();
	
};

