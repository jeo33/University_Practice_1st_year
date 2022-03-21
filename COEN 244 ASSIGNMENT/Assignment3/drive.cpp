
#include"Graph.h"
#include"Vertex.h"
#include"Edge.h"
#include"DirectedGraph.h"
#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	/*
	basiclly I creat 3 directed graph:x,y,z
	I assign the same vertex and edge for x,y and leave z empty set;
	I will use set x to show Problem 1: Abstract Class and Polymorphism (60 Marks)
	And x,y,z to show Problem 2: Operator Overloading (40 Marks)  
	line1-87 are all defination and vlue assignment 
	you can directly go to line 87 

	I am using the same graph provided in the project

	v={1,2,3,4,5,6}
	E={{1,2},{1,4},{2,3},{2,4},{2,5},{3,4},{5,3},{6,3},{6,5}}

	*/



	
	cout << "basiclly I creat 3 directed graph:x,y,z" << endl;
	cout << "graph x is same as graph y and graph z is an empty graph" << endl;
	cout << "I will use set x to show Problem 1: Abstract Class and Polymorphism (60 Marks)" << endl;
	cout << "And x,y,z to show Problem 2: Operator Overloading (40 Marks)  " << endl;
	cout << "I am using the same graph provided in the project" << endl;
	cout << "\nv={1,2,3,4,5,6}\n" << endl;
	cout << "\nE={{1,2},{1,4},{2,3},{2,4},{2,5},{3,4},{5,3},{6,3},{6,5}}\n" << endl;


	DirectedGraph x;
	Vertex A(1,2);
	Vertex B(2,2);
	Vertex C(3, 2);
	Vertex D(4, 2);
	Vertex E(5, 2);
	Vertex F(6, 2);
	Edge a(1,2,1);
	Edge b(1, 4, 1);
	Edge c(2, 3, 1);
	Edge d(2, 4, 1);
	Edge e(2, 5, 1);
	Edge f(3, 4, 1);
	Edge g(5, 3, 1);
	Edge h(6, 3, 1);
	Edge i(6, 5, 1);
	x.addVertex(A);
	x.addVertex(B);
	x.addVertex(C);
	x.addVertex(D);
	x.addVertex(E);
	x.addVertex(F);
	x.addEdge(a);
	x.addEdge(b);
	x.addEdge(c);
	x.addEdge(d);
	x.addEdge(e);
	x.addEdge(f);
	x.addEdge(g);
	x.addEdge(h);
	x.addEdge(i);

	x.setAdArray();
	

	DirectedGraph y;
	Vertex aa(1, 2);
	Vertex bb(2, 2);
	Vertex cc(3, 2);
	Vertex dd(4, 2);
	Vertex ee(5, 2);
	Vertex ff(6, 2);
	Edge AA(1, 2, 1);
	Edge BB(1, 4, 1);
	Edge CC(2, 3, 1);
	Edge DD(2, 4, 1);
	Edge EE(2, 5, 1);
	Edge FF(3, 4, 1);
	Edge GG(5, 3, 1);
	Edge HH(6, 3, 1);
	Edge II(6, 5, 1);
	y.addVertex(aa);
	y.addVertex(bb);
	y.addVertex(cc);
	y.addVertex(dd);
	y.addVertex(ee);
	y.addVertex(ff);
	y.addEdge(AA);
	y.addEdge(BB);
	y.addEdge(CC);
	y.addEdge(DD);
	y.addEdge(EE);
	y.addEdge(FF);
	y.addEdge(GG);
	y.addEdge(HH);
	y.addEdge(II);
	y.setAdArray();
	DirectedGraph z;
	Edge test(1, 3, 1);
	//add edge and vertex has been shown in the value assign process


	cout<<"All cases staring here" << endl;

	cout <<"\nProblem 1: Abstract Class and Polymorphism (60 Marks)\n" << endl;
	cout << "\n-------------------------\n" << endl;
	cout << "\n#this is what graph x looks like\n" << endl;
	x.display();//show the original matrix
	cout << "\n-------------------------\n" << endl;
	x.removeVertex(F);
	cout << "#Remove vertex 6" << endl;
	x.display();//show the matrix remove a vertex
	cout << "\n-------------------------\n" << endl;
	x.addEdge(test);
	cout << "#Add edge 1->3 weight=1" << endl;
	x.display();//you will see 1,3 will be connected and the weight is 1
	cout << "\n-------------------------\n" << endl;
	cout << "#cout<<z.display(), z is an empty object "<<endl;
	z.display();//z is an empty graph, so this will print"this is an empty "
	cout << "\n\npart 2 Operator Overloading(40 Marks)\n" << endl;


	//part 2 Operator Overloading
	cout << "\n-------------------------\n" << endl;
	z = y;//assign y to z, "=" overloading
	cout << "#After z=y:, print z" << z;//using << to print graph z
	//"<<" overloading
	cout << "\n-------------------------\n" << endl;
	cout << "# Result of z==y:" << (z == y);//"==" overloading,this will return 1
	cout << "\n-------------------------\n" << endl;
	cout << "# Result of x>y:" <<(x > y);
	//">" overloading,because we remove edge from x
	//total weight of x should be less than y, so this will return false;
	y++;//postfix "++" overloading 
	++y;//prefix "++" overloading 
	cout<<"#We increment graph y twice.y++ and ++y " << endl;
	cout << "#Here is the gaph y after increment twice,now it should have a weight of 3" << endl;
	cout << y;//the weight should be increased to 3
	cout << "\n-------------------------\n" << endl;
	z.clean();//clean z
	cout << "#After clean z: \n" << z;
	cout << "\n-------------------------\n" << endl;
	x.clean();//clean z
	cout << "#After clean x: \n" << x;
	cout << "\n-------------------------\n" << endl;
	cout << "let z=y+x" << endl;
	z = y + x;//"+" overloading it's empty +y so the result will be z=y;
	cout<<"#After overloading == ,z == y: " << (z == y) << endl;
	cout << "\n-------------------------\n" << endl;
	cout << "# z:" << z;
	
	

	
	
	


}
