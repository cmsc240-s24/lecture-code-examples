#include <cstring>
#include <iostream>
#include <string>
using namespace std;

class SimpleString
{
public:
    SimpleString(int max)
        : max_size{max}, length{0}
    {
        characters = new char[max_size];
        characters[0] = '\0';
    }

    ~SimpleString() { delete[] characters; }

    // Copy constructor
    SimpleString(const SimpleString& other)
        : max_size{other.max_size}, length{other.length}
    {
        characters = new char[max_size];        // Get a new char array 
        strcpy(characters, other.characters);   // Copy the other's characters 
    }

    // Move Constructor
    SimpleString(SimpleString&& other) noexcept
        : max_size{other.max_size}, length{other.length}, characters{other.characters}
    {
        other.characters = nullptr; // Leave source in valid state
        other.length = 0;
        other.max_size = 0;
    }


    bool append(const char* str)
    {
        int str_length = strlen(str);
        if (length + str_length >= max_size)
        {
            return false;
        }

        strcpy(characters + length, str);
        length += str_length;
        return true;
    }


    SimpleString& operator=(const SimpleString& other)
    {
        if (this == &other) // Self-assignment check
        {
            return *this;
        }

        // Clean up current object's resources
        delete[] characters;

        // Copy over data from other
        max_size = other.max_size;
        length = other.length;
        characters = new char[max_size];
        strcpy(characters, other.characters);

        return *this;
    }

    void print() const
    {
        cout << characters << endl;
    }

private:
    int max_size;
    int length;
    char* characters;
};


int main()
{
    SimpleString stringOne{50};
    stringOne.append("We apologize for the");

    cout << "stringOne: ";
    stringOne.print();

    SimpleString stringTwo{move(stringOne)};

    cout << "stringTwo: ";
    stringTwo.print();

    // Print stringOne again
    cout << "stringOne: ";
    stringOne.print();
    
    return 0;
}


