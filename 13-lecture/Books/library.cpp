#include <iostream>
#include <vector>
#include "Book.h"
#include "Novel.h"
using namespace std;

int main()
{
    Book* theDictionary = new Book("Websters Dictionary");
    Book* theGreatGatsby = new Novel("The Great Gatsby", "Fiction");

    Novel* theGreatGatsby2 = new Novel("The Great Gatsby", "Fiction");
    theGreatGatsby2->novelOnly();

    vector<Book*> books;
    books.push_back(theDictionary);
    books.push_back(theGreatGatsby);

    for (Book* book : books)
    {
        book->summarize();
    }

    delete theDictionary;
    delete theGreatGatsby;

    return 0;
}

