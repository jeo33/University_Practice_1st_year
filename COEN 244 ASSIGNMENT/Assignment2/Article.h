#pragma once
#include"Reference.h"
#include <string.h>
class Article : public Reference
{
public:
	Article();//default constructor
	Article(string x, int y, int z);//constructor with 3 parameters
	Article(string tittle, string  author, string information,
	int year, int startpage, int endpage);//constructor
	Article(const Article& x);//copy constructor
	int  getNumberOfPages();//return number of pages
	string getinfo();
	int getstartPage();
	int getendPage();
	void setinfo(string x);
	void setstartPage(int x);
	void setendPage(int x);
	void print()//print function polymorphism
	{
		cout << "id             :" << getid() << endl;
		cout << "title          :" << gettitle() << endl;
		cout << "author         :" << getauthor() << endl;
		cout << "Year Of Public :" << getyearOfPublic() << endl;
		cout << "Information    :" << getinfo() << endl;
		cout << "Start page     :" << getstartPage() << endl;
		cout << "End page       :" << getendPage() << endl;
	}

	~Article();



private:
	string info;
	int startPage;
	int endPage;



};

