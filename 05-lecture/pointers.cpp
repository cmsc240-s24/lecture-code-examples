#include <iostream>
using namespace std;

void swap(double* v1, double* v2)
{
    double temp;
    temp = *v2;
    *v2 = *v1;
    *v1 = temp;
}

int main()
{
    double myDoubleValue = 3.14159;
    double myOtherValue = 2.181;

    cout << "myDoubleValue=" << myDoubleValue 
         << "  myOtherValue=" << myOtherValue << endl;

    swap(&myDoubleValue, &myOtherValue);

    cout << "myDoubleValue=" << myDoubleValue 
         << "  myOtherValue=" << myOtherValue << endl;

    return 0;
}