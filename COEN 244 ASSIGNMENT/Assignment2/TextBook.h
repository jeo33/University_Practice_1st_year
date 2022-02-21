#pragma once
#include"Book.h"
#include <string.h>
#include <string>
using namespace std;

class TextBook: public Book
{
public:
	void setURL(string x);
	string getURL();
	TextBook();//default constructor
	TextBook(string tittle, string  author, string URL,int year, string publisher,int numberOfPages);//constructor
	TextBook( TextBook& x);//copy constructor
	void print()//polymorphism
	{
		cout << "id             :" << getid() << endl;
		cout << "title          :" << gettitle() << endl;
		cout << "author         :" << getauthor() << endl;
		cout << "Year Of Public :" << getyearOfPublic() << endl;
		cout << "Publisher      :" << getpublisher() << endl;
		cout << "Number of pages:" << getNumberOfPages() << endl;
		cout << "URL            :" << getURL() << endl;
	}
	~TextBook();//deconstructor
private:
	string URL;
};

