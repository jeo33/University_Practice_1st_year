#pragma once
#include"Graph.h"
#include"Vertex.h"
#include"Edge.h"
#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
class DirectedGraph :public Graph
{
public:
	DirectedGraph() //constructor
	{
		int NumOfVertex = 0;
		int CurrentNumOfVertex;
		vector<Vertex> VertexSet;

		vector<Edge> EdgeSet;
		
	};

	~DirectedGraph() { /*cout << "Undirec decontructor called" << endl;*/ };// deconstructor


	//add in one vertex; bool returns if it is added successfully.
	bool addVertex(Vertex& v)
	{
		if (!searchVertex(v))//if not repeated we add it
		{
			VertexSet.push_back(v);
			return true;
		}
		else//if repeated we don't add it twice
		{
			cout << "already in it" << endl;
			return false;
		}
		};


	//the edges that has connection with this vertex need to be removed;
	bool removeVertex(Vertex& v) 
	{
		if (searchVertex(v))//if it is in the vertex vector we remove it
		{
			for (int i = 0; i < VertexSet.size(); i++)//remove the vertex from vextex vextor
			{
				if (VertexSet.at(i).id == v.id)
				{
					int temp;
					temp = VertexSet.at(i).id;
					VertexSet.at(i).id = VertexSet.at(VertexSet.size() - 1).id;
					VertexSet.at(VertexSet.size() - 1).id = temp;
					VertexSet.pop_back();
					i = 0;
				}
			}
			//remove the edges which connected to the vertex

			for (int i = 0; i < EdgeSet.size(); i++)
			{
				if (EdgeSet.at(i).Start == v.id || EdgeSet.at(i).end == v.id)
				{
					int temp = EdgeSet.size() - 1;
					EdgeSet.at(i) = EdgeSet.at(temp);
					EdgeSet.pop_back();
					i = 0;
				}
			}
			return true;
		}
		else//if it is not in the vertex vector,we return false;
		{
			cout << "invalid vertex" << endl;
			return  false;
		}
	}


	
	//add edge
	bool addEdge(Edge& e) 
	{
		if (searchEdge(e))//if e is in the edge set ,we dont need to add it again
		{
			cout << "repeated edge" << endl;
			return false;
		}
		else//if e is not in the edge set we add it
		{
		EdgeSet.push_back(e);
		return true;
		}
		
	}


	
	bool remove(Edge& e) //remove edge
	{
		if (searchEdge(e))//if it's in the set we move it
		{
			for (int i = 0; i < EdgeSet.size(); i++)
			{
				if (EdgeSet.at(i).Start == e.Start || EdgeSet.at(i).end == e.end)
				{	//we find the edge and move it to the back and then we pop it out
					int temp = EdgeSet.size() - 1;
					EdgeSet.at(i) = (EdgeSet.at(temp));
					EdgeSet.pop_back();
					i = 0;
				}
			}
			return true;
		}
		else//else we return false
		{
			cout << "invalid edge" << endl;
			return false;
		}
	}



	
	bool searchVertex(const Vertex& v) //simple check function
	{	
		for (auto&t: VertexSet)
		{
			if (v.id == t.id)
			{
				return true;
			}
		}
		return false;
	 }


	 bool searchEdge(const Edge & e) //simple check function
	 {
		 for (auto& t : EdgeSet)
		 {
			 if (t.Start==e.Start&& t.end == e.end)
			 {
				 return true;
			 }
		 }
		 return false;
	 }

	 void setAdArray()//set the adjacent matrix
	 {
		 int** array2D = 0;
		 int height = VertexSet.size();
		 int width = VertexSet.size();
		 array2D = new int* [height];
		 int value = 0;
		 for (int h = 0; h < height; h++)
		 {
			 array2D[h] = new int[width];

			 for (int w = 0; w < width; w++)
			 {
				 for (auto& s : EdgeSet)
				 {
					 if (s.Start - 1 == h && s.end - 1 == w) value=s.weight;
				 }
				 Edge e(h + 1, w + 1, value);
				 if (searchEdge(e))
					 array2D[h][w] = e.weight;//set the weight to the displayed value
				 else array2D[h][w] = 0;
			 }
		 }
		Arr= array2D;
	 }

	

	 void display() const//display the matrix using the adjacency matrix/list
	 {
		 if (!EdgeSet.empty())//if it's not empty
		 {
			 //display the matrix using the adjacency list
			 cout << "Here is the adjacency list\n" << endl;
			 for (int i = 0; i < VertexSet.size(); i++)
			 {
				 cout << VertexSet.at(i).id << " ";
				 for (auto& s : EdgeSet)
				 {
					 if (s.Start == VertexSet.at(i).id)
						 cout << " -- " << s.end;
				 }
				 cout << endl;
			 }

			 //display the matrix using the adjacency matrix
			 cout << "Here is the adjacency matrix, the value means the weight\n" << endl;
			 cout << "  ";
			 for (int i = 0; i < VertexSet.size(); i++)
				 cout << VertexSet.at(i).id << " ";
			 cout << endl;
			 for (int i = 0; i < VertexSet.size(); i++)
			 {
				 cout << VertexSet.at(i).id << " ";
				 for (int j = 0; j < VertexSet.size(); j++)
				 {
					 cout << Arr[i][j] << " ";
				 }
				 cout << endl;
			 }
		
			}
		 else cout << "this is an empty graph";//if it's an empty set
		
		}


	 string toString()//convert to adjacency string like column by colum and seperated by \t
	 {
		 string str;
		 for (int i = 0; i < VertexSet.size(); i++)
		 {
			 str.push_back(VertexSet.at(i).id + '0');
			 str = str + ":";
			 for (auto& s : EdgeSet)
			 {
				 if (s.Start == VertexSet.at(i).id)
				 {
					 str = str + " -- ";
					 str.push_back(s.end + '0');//intager to string
				 }
			 }
			 str = str + "    ";
		 }
		 std::cout << str;

		 return str;
		 
	 }



	//remove all the vertices and edges;
	 bool clean() 
	 {
		 VertexSet.erase(VertexSet.begin(), VertexSet.begin() + VertexSet.size());
		 EdgeSet.erase(EdgeSet.begin(), EdgeSet.begin() + EdgeSet.size());
		return true;
	 }
	 //overloading == operator
	 bool operator== (const DirectedGraph& a)
	 {	//if size not match it's definately wrong
		 if (a.EdgeSet.size() != this->EdgeSet.size() && a.VertexSet.size() != this->VertexSet.size())
		 {
			 return false;
		 }
		 else//if matched ,we check every element to make it's the same
		 {
			 for (auto& s : a.EdgeSet)
			 {
				 if (!this->searchEdge(s))return false;

			 }
			 for (auto& s : a.VertexSet)
			 {
				 if (!this->searchVertex(s))return false;

			 }
			 return true;//if all went through we good and return true
		 }
	 }
	 //overloading = operator
	 DirectedGraph operator= (const DirectedGraph& a)
	 {
		 this->clean();//we need to clear the target object content
		 this->VertexSet = a.VertexSet;//pass vertexset
		 this->EdgeSet = a.EdgeSet;//pass edgeset
		 this->setAdArray();//recreat the adjacency matrix
		 return *this;
	 }
	 DirectedGraph& operator++ ()//prefix incement operator
	 {
		 for (auto& s : this->EdgeSet)
		 {
			 s.weight= s.weight+1;//we increase the weight and return it
		 }
		 this->setAdArray();//recreat the adjacency matrix,this is based on edgeset
		 return *this;
	 }


	DirectedGraph operator++ (int)//postfix incement operator
	 {
		DirectedGraph temp = *this;
		 for (auto& s : this->EdgeSet)
		 {
			 s.weight = s.weight + 1;
		 }
		 this->setAdArray();//recreat the adjacency matrix,this is based on edgeset
		 return temp;//we return the old point and then change the weight
	 }

	 friend void operator<<(ostream &output,const DirectedGraph& a)
	 {
		 a.display();//call function to display the graph
	 }
	 bool operator>(const DirectedGraph& a)//overloading > operator 
	 {
		 int x = 0;//right hand side sum
		 int y = 0;//left hand side sum
		 for (auto& s : a.EdgeSet)
		 {
			 x = x + s.weight;
		 }
		 for (auto& s : this->EdgeSet)
		 {
			 y = y + s.weight;
		 }
		 if (y > x)return true;//we compare if left hand side bigger we return true
		 else return false;
	 }
	 DirectedGraph operator+(const DirectedGraph& a)//overloading + operator 
	 {
		 DirectedGraph x;//creat a new object
		 for (auto& s : a.EdgeSet)//add edges from right hand side
		 {
			 x.EdgeSet.push_back(s);
		 }
		 for (auto& s : this->EdgeSet) // add edges from left hand side
		 {
			 x.EdgeSet.push_back(s);
		 }
		 for (auto& s : a.VertexSet)//add vertex from right hand side
		 {
			 x.VertexSet.push_back(s);
		 }
		 for (auto& s : this->VertexSet)// add vertex from left hand side
		 {
			 x.VertexSet.push_back(s);
		 }
		 x.setAdArray();//re arange the adjacency matrix because the size have changed
		 return x;//return the value back;
	 } 
	 vector<int> leaves;
	 vector<Vertex> VertexSet ;
	 int** Arr;
	 vector<Edge> EdgeSet;

};

