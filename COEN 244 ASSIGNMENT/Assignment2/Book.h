#pragma once
#include"Reference.h"
#include <string.h>
class Book:public Reference
{
public:
	int getNumberOfPages();
	string getpublisher();
	void setNumberOfPages(int x);
	void setpublisher(string x);
	Book();//default constructor
	Book(string tittle, string  author, string publisher,
		int year, int numberOfPages);//constructor 
	Book( Book& x);//copy constructor
	void print()//polymorphism
	{
		cout << "id             :" << getid() << endl;
		cout << "title          :" << gettitle() << endl;
		cout << "author         :" << getauthor() << endl;
		cout << "Year Of Public :" << getyearOfPublic() << endl;
		cout << "Publisher      :" << getpublisher() << endl;
		cout << "Number of pages:" << getNumberOfPages() << endl;
		
	}

	~Book();//decontructor

private:
	string publisher;
	int numberOfPages;
};

