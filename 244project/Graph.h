#pragma once
#include <iostream>
#include <vector>
#include<list>
#include<string>
#include"Edge.h"
#include"Vertex.h"
using namespace std;
class Graph
{
	public:
		Graph();
		bool addVertex(Vertex v);
		bool addEdge(Edge e);
		bool CheckVertex(int v);
		bool CheckVertex(Vertex v);
		bool CheckVertexValue(string s);
		bool CheckEdge(Edge e);
		int checkVertexId(Vertex v);
		int checkVertexId(int i);
		int checkEdgeId(Edge e);
		int checkEdgeId(int x, int y);
		bool removeVertex(Vertex v);
		bool removeEdge(Edge e);
		bool setGraph();
		void print();
		void printPaths(Vertex x, Vertex y);
		void printAllPaths(Vertex x, Vertex y, bool visited[], string path[], int& path_index);

		vector<string*> PathArray;
		vector<Vertex> VertexArray;
		vector<Edge> EdgeArray;
		int arr[50][50]; //pmatrix
};




