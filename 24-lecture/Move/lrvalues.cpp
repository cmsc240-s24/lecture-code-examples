#include <iostream>
using namespace std;

void referenceType(int& ref)
{
    cout << "lvalue reference " << ref << endl;
}

void referenceType(int&& ref)
{
    cout << "rvalue reference " << ref << endl;
}

int main()
{
    int x = 1;
    referenceType(x);
    referenceType(2);
    referenceType(x + 2);
}
