#include <iostream>
using namespace std;

// Test block scope and scope shadowing.
// Test for loop block scope.


int main()
{

    int num = 100;

    // Block scope
    {

        int num = 50;
        cout << num << endl;
        int x = 42;
        cout << x << endl;

    }

    cout << num << endl;




}


