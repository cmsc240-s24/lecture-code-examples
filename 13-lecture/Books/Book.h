#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book 
{
public:
    Book(std::string t) : title(t) {}

    std::string getTitle() const
    {
        return title;
    }

    virtual void summarize() 
    {
        std::cout << "This is a book titled: " << title << std::endl;
    }
    
protected:
    std::string title;
    
};

#endif