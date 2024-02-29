#ifndef NOVEL_H
#define NOVEL_H

#include <iostream>
#include <string>
#include "Book.h"

class Novel : public Book 
{
public:
    Novel(std::string t, std::string g) : Book(t), genre(g) {}

    void summarize() 
    {
        std::cout << "This is a " << genre << " novel titled: " << title << std::endl;
    }

    void novelOnly()
    {
        std::cout << "Novel only function" << std::endl;
    }

private:
    std::string genre;
};

#endif