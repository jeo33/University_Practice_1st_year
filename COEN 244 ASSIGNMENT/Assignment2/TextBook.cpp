#include "TextBook.h"

void TextBook::setURL(string x)
{
    URL = x;
}

string TextBook::getURL()
{
    return URL;
}

TextBook::TextBook()
{
    URL = "Empty";
}

TextBook::TextBook(string tittle, string author, string URL, int year, string publisher, int numberOfPages):Book( tittle,  author, publisher,
   year, numberOfPages)
{
    setURL(URL);
}

TextBook::TextBook( TextBook& x) :Book(x)
{
    URL = x.URL;
}

TextBook::~TextBook()
{
}
