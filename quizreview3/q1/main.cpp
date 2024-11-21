
#include "Library.h"

// New comment
int main() 
{
    Library library;
    library.addBook(Book("1984"));
    library.addBook(Book("Brave New World"));

    library.showBooks();
    return 0;
}