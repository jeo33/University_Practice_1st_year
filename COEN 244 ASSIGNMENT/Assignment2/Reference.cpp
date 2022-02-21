#include "Reference.h"
int Reference::id_counter = 1;
Reference::Reference() 
{
	id = id_counter;
	
	title = "Empty";
	author = "Empty";
	yearOfPublic = 999;
	id_counter++;

}
Reference::Reference(string x, string y, int z)
{
	
	id = id_counter++;
	title = x;
	author = y;
	yearOfPublic = z;
	
}
Reference::Reference(const Reference& x)
{
	this->id = x.id;
	this->title = x.title;
	this->author = x.author;
	this->yearOfPublic = x.yearOfPublic;
}
;
int Reference::getid()
{
	return id;
}
string Reference::gettitle()
{
	return title;
}
string Reference::getauthor()
{
	return author;
}
int Reference::getyearOfPublic()
{
	return yearOfPublic;
}
void Reference::setid(int x)
{
	id = x;
}
void Reference::settitle(string x)
{
	title = x;
}
void Reference::setauthor(string x)
{
	author = x;
}
void Reference::setyearOfPublic(int x)
{
	yearOfPublic = x;
}

Reference::~Reference()
{
	
	id_counter--;
}
