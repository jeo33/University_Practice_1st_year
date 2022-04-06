#pragma once

#include <iostream>
#include <vector>
#include<list>
#include<string>
#include"Edge.h"
#include"Vertex.h"
#include"Graph.h"
using namespace std;
class UndirectedGraph:public Graph
{

public:

	
	UndirectedGraph();
	
	bool addEdge(Edge e);
	/*
	bool CheckVertex(int v);
	bool CheckVertex(Vertex v);
	bool CheckVertexValue(string s);
	bool CheckEdge(Edge e);
	int checkVertexId(int i);
	int checkVertexId(Vertex v);
	int checkEdgeId(Edge e);
	int checkEdgeId(int x, int y);
	bool removeVertex(Vertex v);
	bool removeEdge(Edge e);
	bool setGraph();
	*/
	void print();
	void printPaths(Vertex x);


};




