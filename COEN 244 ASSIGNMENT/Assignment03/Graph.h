#include"Vertex.h"
#include"Edge.h"

#include <string>
using namespace std;
#pragma once
class Graph {
public:
	Graph();//this part is given so i don't right comment on this
	virtual ~Graph();

	virtual bool addVertex(Vertex& v) = 0;

	virtual bool removeVertex(Vertex& v) = 0;

	virtual bool addEdge(Edge& e) = 0;

	virtual bool remove(Edge& e) = 0;

	virtual bool searchVertex(const Vertex& v) = 0;

	virtual bool searchEdge(const Edge& e) = 0;

	virtual void display() const = 0;

};