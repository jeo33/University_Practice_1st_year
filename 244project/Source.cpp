#include <iostream>
#include <vector>
#include<list>
#include<string>
#include"Edge.h"
#include"Vertex.h"
#include"Graph.h"
#include"UndirectedGraph.h"
#include "menu.h"
using namespace std;

int main()
{
	menu m;
	m.drive();

	return 0;



	/*
	UndirectedGraph* G=new UndirectedGraph();
	G->print();
	Vertex A(1,"Concordia");
	Vertex B(2, "Mcgill");
	Vertex C(3, "SnowTown");
	Vertex D(4, "Lucien l'allier");


	Edge AA(1, 2);
	Edge BB(1, 4);
	Edge CC(2, 3);
	Edge DD(2, 4);
	Edge EE(3, 4);

	G->addVertex(A);
	G->addVertex(D);
	G->addVertex(B);
	G->addVertex(C);



	G->addEdge(AA);
	G->addEdge(BB);
	G->addEdge(CC);
	G->addEdge(DD);
	G->addEdge(EE);

	G->DirectedGraph();
	G->print();
	cout << endl;
	G->printPaths(A);
	G->removeVertex(A);
	G->DirectedGraph();
	G->print();
	cout << endl;
	G->addVertex(A);
	G->DirectedGraph();
	G->print();
	cout << endl;




	Graph* G = new Graph(6);


	Vertex* A = new Vertex(1);
	Vertex* B = new Vertex(2);
	Vertex* C = new Vertex(3);
	Vertex* D = new Vertex(4);
	Vertex* E = new Vertex(5);
	Vertex* F = new Vertex(6);


	G->addV(A);
	G->addV(B);
	G->addV(C);
	G->addV(D);
	G->addV(E);
	G->addV(F);

	G->DirectedGraph(1, 2);
	G->DirectedGraph(1, 4);
	G->DirectedGraph(2, 3);
	G->DirectedGraph(2, 4);
	G->DirectedGraph(2, 5);
	G->DirectedGraph(3, 4);
	G->DirectedGraph(5, 3);
	G->DirectedGraph(6, 5);
	G->DirectedGraph(6, 3);

	G->printMatrix();
	*/

}
