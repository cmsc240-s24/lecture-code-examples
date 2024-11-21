#include <iostream>
using namespace std;

void testFunction()
{
    cout << "Global Scope" << endl;
}

namespace TestNamespace 
{
    void testFunction()
    {
        cout << "Namespace Scope" << endl;
    }
}

int main()
{
    testFunction();
    TestNamespace::testFunction();
    return 0;
}