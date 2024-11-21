#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main()
{
    string input = "Hello";

    cout << input[0] << endl;
    cout << input[5] << endl; // Out of bounds
    cout << input[-5] << endl;
    cout << input[300] << endl;

    char str[] = "Hello";

    cout << str[0] << endl;
    cout << str[5] << endl; // Should be nul char
    cout << str[-5] << endl;
    cout << str[300] << endl;

    while (1)
    {
        sleep(5);
    }

    return 0;
}