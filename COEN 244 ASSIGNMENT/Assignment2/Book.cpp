#include "Book.h"

int Book::getNumberOfPages()
{
    return numberOfPages;
}

string Book::getpublisher()
{
    return publisher;
}

void Book::setNumberOfPages(int x)
{
    numberOfPages = x;
}

void Book::setpublisher(string x)
{
    publisher = x;
}

Book::Book()
{
    publisher="Empty";
    numberOfPages=-999;
}

Book::Book(string tittle, string author, string publisher, int year, int numberOfPages) :Reference(tittle, author, year)
{
    setNumberOfPages(numberOfPages);
    setpublisher(publisher);
}

Book::Book( Book& x) :Reference(x)
{
    publisher = x.publisher;
    numberOfPages = x.numberOfPages;
}

Book::~Book()
{
}
