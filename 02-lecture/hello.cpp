#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name (followed by 'enter'):" << endl;
    string first_name;     // first_name variable of type string
    cin >> first_name;     // read characters into first_name
    cout << "Hello, " << first_name << "!" << endl;
    return 0;
}

