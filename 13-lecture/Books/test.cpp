#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello" << endl;
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        hello(); 
    }
        
    cout << "Goodbye"<< endl;

    int count = 0;

    // while (count < 5)
    //     hello(); count += 1;

    cout << "After while" << endl;
    return 0;
}