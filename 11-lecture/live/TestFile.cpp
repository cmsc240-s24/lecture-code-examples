#include <iostream>
using namespace std;

// Test global scope variables.
// Test static file scope variables.

#define GLOBAL_VAR
int globalVar = 50;

static int fileGlobal;

void function()
{

    //cout << globalVar << endl;
}


int main()
{

    cout << fileGlobal << endl;

    function();
    return 0;
}