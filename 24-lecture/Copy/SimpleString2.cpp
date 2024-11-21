#include <cstring>
#include <iostream>
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
    SimpleString original(20);
    original.append("Hello");

    // Use the copy constructor
    SimpleString copy = original;

    original.print(); // Outputs: Hello
    copy.print();     // Outputs: Hello

    // Modify the copy
    copy.append(", World!");
    copy.print();     // Outputs: Hello, World!

    // Ensure the original is unchanged
    original.print(); // Outputs: Hello

    SimpleString stringOne{50};
    stringOne.append("We apologize for the ");

    SimpleString stringTwo{50};
    stringTwo.append("last message.");

    stringOne = stringTwo;





    return 0;
}