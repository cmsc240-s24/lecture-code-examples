#include <iostream>
using namespace std;

// Test extern global scope variables.
// Test static file global scope variables.

#ifndef GLOBAL_VAR
int globalVar;
#else
extern int globalVar;
#endif


int main()
{

    cout << globalVar << endl;

    return 0;
}