#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int x = 22;    // Set a breakpoint here.
    int y = 10;

    cerr << "x == " << x << ", y == " << y << endl;

    int sum = add(x, y);

    cout << "sum == " << sum << endl;

    return 0;
}


