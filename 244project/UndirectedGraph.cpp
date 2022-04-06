#include "UndirectedGraph.h"
#include "Graph.h"
#include <iostream>
#include <vector>
#include<list>
#include<string>
#include"Edge.h"
#include"Vertex.h"

UndirectedGraph::UndirectedGraph()
	{
		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				arr[i][j] = 0;
			}

		}
	};

bool UndirectedGraph::addEdge(Edge e)
{
	if (CheckEdge(e))
	{
		cout << "Edge already exist" << endl;
		return false;
	}
	else
	{
		Edge temp(0,0);
		temp.end = e.Start;
		temp.Start = e.end;
		EdgeArray.push_back(temp);
		EdgeArray.push_back(e);
		return true;
	}

}

/*

	bool UndirectedGraph::addVertex(Vertex v)
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

	
	bool UndirectedGraph::CheckVertex(int v)
	{
		for (auto& t : VertexArray)
		{
			if (t.id == v)
				return true;

		}
		return false;
	}


	bool UndirectedGraph::CheckVertex(Vertex v)
	{
		for (auto& t : VertexArray)
		{
			if (t.id == v.id && t.Value == v.Value)
				return true;

		}
		return false;
	}

	bool UndirectedGraph::CheckVertexValue(string s)
	{
		for (auto& t : VertexArray)
		{
			if (t.Value == s)
				return true;

		}
		return false;
	}


	bool UndirectedGraph::CheckEdge(Edge e)
	{
		for (auto& t : EdgeArray)
		{
			if ((t.Start == e.Start && t.end == e.end) || (t.Start == e.end && t.end == e.Start))
				return true;

		}
		return false;
	}

	int UndirectedGraph::checkVertexId(int i)
	{
		int pos = 0;
		for (auto& t : VertexArray)
		{
			if (i == t.id)return pos;
			pos++;
		}
		return 0;
	}


	int UndirectedGraph::checkVertexId(Vertex v)
	{
		int pos = 0;
		for (auto& t : VertexArray)
		{
			if (v.id == t.id)return pos;
			pos++;
		}
		return 0;
	}

	int UndirectedGraph::checkEdgeId(Edge e)
	{
		int pos = 0;
		for (auto& t : EdgeArray)
		{
			if (e.end == t.end && e.Start == t.Start)return pos;
			pos++;
		}
		return 0;
	}

	int UndirectedGraph::checkEdgeId(int x, int y)
	{
		int pos = 0;
		for (auto& t : EdgeArray)
		{
			if (x == t.end && y == t.Start)return pos;
			pos++;
		}
		return 0;
	}



	bool UndirectedGraph::removeVertex(Vertex v)
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
			cout << "Vertex not exist" << endl;
			return false;
		}

	}

	bool UndirectedGraph::removeEdge(Edge e)
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


	bool UndirectedGraph::setGraph()//DirectedGraph
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
	*/
	void UndirectedGraph::print()
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




	void UndirectedGraph::printPaths(Vertex x)
	{
		for (auto& t : VertexArray)
		{
			
			cout << t.Value << ":";
			for (int i = 0; i < VertexArray.size(); i++)
			{
				if (arr[t.id][i] != 0)
					cout << "->" << VertexArray[i].Value;
			}
			cout <<"\n"<< endl;
		}
	}









