#include <array>
#include <iostream>
using namespace std;


void print(array<int, 10> arrayToPrint)
{
    // for each loop
    for (int element : arrayToPrint)
    {
        cout << element << endl;
    }

    for (int index = 0; index < arrayToPrint.size(); index++)
    {
        cout << arrayToPrint[index] << endl;
    }
}

int main()
{
    array<int, 10> numbers = {1, 2, 3, 4};
    print(numbers);

    cout <<  "FILLING ARRAY!!" << endl << endl << endl;

    numbers.fill(10);

    print(numbers);

    return 0;
}