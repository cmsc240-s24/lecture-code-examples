#include <iostream>
using namespace std;

template <typename T>
T maxValue(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int x1 = 10;
    int y1 = 6;
    cout << "The max value of x1 and y1 is " << maxValue<int>(x1, y1) << endl;

    double x2 = 10.2;
    double y2 = 6.4;
    cout << "The max value of x2 and y2 is " << maxValue<double>(x2, y2) << endl;
    return 0;
}

