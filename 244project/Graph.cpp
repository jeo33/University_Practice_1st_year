#include "Graph.h"
#include <iostream>
#include <vector>
#include<list>
#include<string>
#include"Edge.h"
#include"Vertex.h"
using namespace std;

	Graph::Graph()
	{
		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				arr[i][j] = 0;
			}

		}
	};




	bool Graph::addVertex(Vertex v)
	{
		if (CheckVertex(v))
		{
			cout << "Vertex already exist" << endl;
			return false;
		}
		else
		{
			VertexArray.push_back(v);
			cout << "Vertex added successfully" << endl;
			return true;

		}
	}
	bool Graph::addEdge(Edge e)
	{
		if (CheckEdge(e))
		{
			cout << "Edge already exist" << endl;
			return false;
		}
		else
		{
			EdgeArray.push_back(e);
			cout << "Edge added successfully" << endl;
			return true;
		}
	}



	bool Graph::CheckVertex(int v)
	{
		for (auto& t : VertexArray)
		{
			if (t.id == v)
				return true;

		}
		return false;
	}


	bool Graph::CheckVertex(Vertex v)
	{
		for (auto& t : VertexArray)
		{
			if (t.id == v.id && t.Value == v.Value)
				return true;

		}
		return false;
	}

	bool Graph::CheckVertexValue(string s)
	{
		for (auto& t : VertexArray)
		{
			if (t.Value == s)
				return true;

		}
		return false;
	}


	bool Graph::CheckEdge(Edge e)
	{
		for (auto& t : EdgeArray)
		{
			if ((t.Start == e.Start && t.end == e.end)||( t.Start == e.end && t.end == e.Start))
				return true;

		}
		return false;
	}

	int Graph::checkVertexId(int i)
	{
		int pos = 0;
		for (auto& t : VertexArray)
		{
			if (i == t.id)return pos;
			pos++;
		}
		return 0;
	}

	int Graph::checkVertexId(Vertex v)
	{
		int pos = 0;
		for (auto& t : VertexArray)
		{
			if (v.id == t.id)return pos;
			pos++;
		}
		return 0;
	}

	


	int Graph::checkEdgeId(Edge e)
	{
		int pos = 0;
		for (auto& t : EdgeArray)
		{
			if (e.end == t.end && e.Start == t.Start)return pos;
			pos++;
		}
		return 0;
	}

	int Graph::checkEdgeId(int x, int y)
	{
		int pos = 0;
		for (auto& t : EdgeArray)
		{
			if (x == t.end && y == t.Start)return pos;
			pos++;
		}
		return 0;
	}



	bool Graph::removeVertex(Vertex v)
	{
		if (CheckVertex(v))
		{
			int temp;
			temp = checkVertexId(v);
			VertexArray[temp].id = VertexArray[VertexArray.size() - 1].id;
			VertexArray[temp].Value = VertexArray[VertexArray.size() - 1].Value;
			VertexArray.pop_back();

			while (checkEdgeId(v.id, v.id) != 0)
			{
				temp = checkEdgeId(v.id, v.id);
				EdgeArray[temp].end = EdgeArray[EdgeArray.size() - 1].end;
				EdgeArray[temp].Start = EdgeArray[EdgeArray.size() - 1].Start;

				EdgeArray.pop_back();
			}
			return true;
		}
		else
		{	
			cout<<"Vertex not exist"<<endl;
			return false;
		}

	}

	bool Graph::removeEdge(Edge e)
	{
		if (CheckEdge(e))
		{
			int temp;
			temp = checkEdgeId(e);
			EdgeArray[temp].Start = EdgeArray[EdgeArray.size() - 1].Start;
			EdgeArray[temp].end = EdgeArray[EdgeArray.size() - 1].end;
			EdgeArray.pop_back();
			return true;
		}
		else
		{
			cout << "Edge not exist" << endl;
			return false;
		}
	}


	bool Graph::setGraph()//DirectedGraph
	{
		int val = 1;
		int row, colum;
		row = VertexArray.size();
		colum = row;

		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				arr[i][j] = 0;
			}

		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colum; j++)
			{
				for (auto& t : EdgeArray)
				{
					if (t.Start == VertexArray[i].id && t.end == VertexArray[j].id)
						arr[i][j] = 1;

				}
			}
		}

		return true;
	}

	void Graph::print()
	{
		int row, colum;
		row = VertexArray.size();
		colum = row;
		if (colum == 0) { cout << "empty graph" << endl; }
		for (int i = -1; i < row; i++)
		{
			if (i == -1)cout << "* ";
			else { cout << VertexArray[i].id << " "; }
		}
		cout << endl;
		for (int i = 0; i < row; i++)
		{
			cout << VertexArray[i].id << " ";
			for (int j = 0; j < colum; j++)
			{

				cout << arr[i][j] << " ";

			}
			cout << endl;
		}
	}









	void Graph::printPaths(Vertex x, Vertex y)
	{
		int num = VertexArray.size();
		bool* visited = new bool[num];

		// Create an array to store paths
		string* path = new string[num];
		int path_index = 0; // Initialize path[] as empty

		// Initialize all vertices as not visited
		for (int i = 0; i < num; i++)
			visited[i] = false;

		// Call the recursive helper function to print all paths
		printAllPaths(x, y, visited, path, path_index);
	}

	// A recursive function to print all paths from 'u' to 'd'.
	// visited[] keeps track of vertices in current path.
	// path[] stores actual vertices and path_index is current
	// index in path[]
	void Graph::printAllPaths(Vertex x, Vertex y, bool visited[], string path[], int& path_index)
	{
		// Mark the current node and store it in path[]
		visited[checkVertexId(x)] = true;
		path[path_index] = x.Value;
		path_index++;

		// If current vertex is same as destination, then print
		// current path[]
		if (x.id == y.id) {
			for (int i = 0; i < path_index; i++)
			{
				if (i == 0) cout << path[i];
				else cout << "->" << path[i];
			}
			cout << endl;
		}
		else // If current vertex is not destination
		{
			// Recur for all the vertices adjacent to current vertex
			for (int i = 0; i < VertexArray.size(); i++)
			{
				if (arr[checkVertexId(x)][i] != 0)
				{

					printAllPaths(VertexArray[i], y, visited, path, path_index);
				}
			}

		}

		// Remove current vertex from path[] and mark it as unvisited
		path_index--;
		visited[checkVertexId(x)] = false;
	}




	/*


		[1] A graph can be empty with no vertex or edge.
		[2] A graph can be either a directed graph or an undirected graph.
		[3] A graph can be added in vertices and edges.
		[4] A vertex of a graph can contain values ¨C in theory, the values can be of any type.
		[5] A graph can be displayed by listing all the possible paths, each linking vertices.
		[6] A graph can be queried by given a starting vertex, listing the path this vertex leads.
		[7] A graph can be queried by given an edge, if this edge exists in the graph
		[8] A graph can be queried if a value is contained by any of its vertex.
		[9] Demonstrate at least three of the following techniques(any 3) : inheritance;
	polymorphism; operator overloading; template; exception handling.

	*/














