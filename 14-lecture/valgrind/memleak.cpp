#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int;
    
    *ptr = 50;

    cout << "Contents of pointer == " << *ptr << endl;
    // There should be a delete here.
    delete ptr;
    ptr = new int; //<-- memory leak

    delete ptr;

    return 0;
}