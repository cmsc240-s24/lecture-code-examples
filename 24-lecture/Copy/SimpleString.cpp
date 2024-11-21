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
    
    bool append(const char* str)
    {
        int str_length = strlen(str);
        if (length + str_length >= max_size)
            return false; // Not enough space to append the string

        strcpy(characters + length, str); // Append at the end of current string
        length += str_length;
        return true;
    }

    void print() const { cout << characters << endl; }
private:
    int max_size, length;
    char* characters;
};




int main()
{
    SimpleString myStringOne(20);
    myStringOne.append("Hello");

    SimpleString myStringTwo = myStringOne;  // Make a copy of String One
    myStringTwo.append(", World!");
    
    myStringOne.print();

    return 0;
}

