

#include <iostream>
#include <vector>
using namespace std;


class Vertex
{
public:
	Vertex(int x=0)
	{
		Value = 0;
		id = x;
		visitedOrNot = false;
	}
	
	Vertex(const Vertex& v)//C CONSTRUCTOT
	{
		if (this == &v) return;
		*this = v;
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
	int Value;
	bool visitedOrNot;
};



class Edge
{
public:
	Edge(int nodeIndexA = 0, int nodeIndexB = 0) :Start(nodeIndexA),
		end(nodeIndexB),Selected(false) {}
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

public:
	int Start; //s
	int end; //e
	bool Selected; //selected or not
};





class Graph
{

public:
	int NumOfVertex; //total number of vertex
	Vertex* VertexArray; //vertex array
	//Edge* Earray;
	int* arr; //pmatrix

	

	Graph(int n)
	{
		NumOfVertex = n;
		if (n == 0)cout<<"This is an empty graph" << endl;
		VertexArray = new Vertex[NumOfVertex];
		arr = new int[NumOfVertex * NumOfVertex];
		for (int i=0;i< NumOfVertex* NumOfVertex;i++)
		{
			arr[i] = 0;
		}
	
	}
	void addV(Vertex* vertex)
	{
		
		VertexArray[NumOfVertex].id = vertex->id;
		VertexArray[NumOfVertex].Value= vertex->Value;

	}

	void addE(Edge* E)
	{

		VertexArray[NumOfVertex].id = E->Start;
		VertexArray[NumOfVertex].Value = E->end;

	}



	bool DirectedGraph(int row, int col)//DirectedGraph
	{	
		int val = 1;
		if (row < 0 || row >= NumOfVertex)
			return false;
		if (col < 0 || col >= NumOfVertex)
			return false;
		arr[(row-1) * NumOfVertex +( col-1)] = val;
		return true;
	}

	bool UndirectedGraph(int x, int y)//UndirectedGraph
	{	
		int row = x - 1;
		int col = y - 1;
		int val = 1;
		if (row < 0 || row >= NumOfVertex)
			return false;
		if (col < 0 || col >= NumOfVertex)
			return false;
		arr[row * NumOfVertex + col] = val;
		arr[col * NumOfVertex + row] = val;
		return true;
	}

	void printMatrix()
	{
		for (int i = 0; i < NumOfVertex; i++)
		{
			for (int j = 0; j < NumOfVertex; j++)
			{
				
				cout << arr[i * NumOfVertex + j]<<" ";
				
			}
			cout << endl;
		}
	}

};










int main()
{
	Graph* G = new Graph(0);
	
	
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
	
}
