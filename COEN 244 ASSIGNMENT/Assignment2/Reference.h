#pragma once
#include<iostream>
using namespace std;
class Reference
{

public:
	
	Reference();//default constructor
	Reference(string x,string y,int z);//constructor
	Reference(const Reference& x);//copy constructor
	int getid();
	string gettitle();
	string getauthor();
	int getyearOfPublic();
	void setid(int x);
	void settitle(string x);
	void setauthor(string x);
	void setyearOfPublic(int x);
	~Reference();//deconstructor
	static int id_counter;
	 virtual void print()//virtual enable polymorphism
	{
		cout<<  "id             :" << getid() << endl;
		cout << "title          :" << gettitle() << endl;
		cout << "author         :" << getauthor() << endl;
		cout << "Year Of Public :" << getyearOfPublic() << endl;
	}
	 
	
private:
	int id;
	string title;
	string author;
	int yearOfPublic;
	
};

