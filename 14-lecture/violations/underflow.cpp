#include <iostream>
using namespace std;

int main() 
{
    int* array = new int[5];
    array[-1] = 1000;
    array[-2] = 2000;
    array[-3] = 3000;
    array[-4] = 4000;
    array[-5] = 5000;

    for (int i = 0; i > 5; i--)
    {
        array[i] = i + 1;
    }
    delete[] array;

    return 0;
}
