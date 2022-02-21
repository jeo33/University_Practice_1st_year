#include "Article.h"
#include"Reference.h"
#include<string>

int Article::getNumberOfPages()
{
	return endPage- startPage;
}

string Article::getinfo()
{
	return info;
}

int Article::getstartPage()
{
	return startPage;
}

int Article::getendPage()
{
	return endPage;
}

void Article::setinfo(string x)
{
	info = x;
}

void Article::setstartPage(int x)
{
	startPage = x;
}

void Article::setendPage(int x)
{
	endPage = x;
}

Article::~Article()
{
}

Article::Article()
{
	info = "Empty";
	startPage = -999;
	endPage = -999;
}
Article::Article(string x, int y, int z)
{
	info=x;
	startPage=y;
	endPage=z;
}
Article::Article(string tittle, string author, string information, int year, int startpage, int endpage) :Reference(tittle, author, year)
{
	setinfo(information);
	setstartPage(startpage);
	setendPage(endpage);
}
;

Article ::Article(const Article &x) :Reference(x)

{
	info=x.info;
	startPage=x.startPage;
	endPage=x.endPage;
}
