// #include <iostream>
using namespace std;

template <typename T, typename S>
S maxValue(T x, S y)
{
    T var1;
    S var2;

    if (x > y)
        return x;
    else
        return y;
}



int main()
{
    int x1 = 10;
    int y1 = 6;
    maxValue<int, double>(x1, y1);
    //cout << "The max value of x1 and y1 is " << maxValue<int>(x1, y1) << endl;

    double xd1 = 12.5;
    double yd1 = 3.14;
    maxValue<double>(xd1, yd1);
    //cout << "The max value of xd1 and yd1 is " << maxValue<double>(xd1, yd1) << endl;
}

