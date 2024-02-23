#include <iostream>
#include <string>
using namespace std;

// Test global namespace variable.
// Test two namespaces.
// Test a second namepspace block adding functionality to the first block.

string name = "Global";

namespace apple
{
    string name = "Apple";

    int function()
    {
        return 10;
    }
    int moreVariables = 42;

    namespace nested
    {
        int var = 50;
    }
}

namespace orange
{
    string name = "Orange";
    int function()
    {
        return 400;
    }
}

int main()
{
    using namespace apple;
    using namespace orange;

    cout << ::name << endl;
    cout << apple::name << endl;
    cout << orange::name << endl;

    cout << apple::nested::var << endl;

    return 0;
}


