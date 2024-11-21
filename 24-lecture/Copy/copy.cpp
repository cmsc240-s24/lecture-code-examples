#include <iostream>
using namespace std;

int add_one_to(int value)  // Implicitly makes a copy
{
    value++;       // Increment the copied value.
    return value;
}

int main()
{
    int original = 1;
    int result = add_one_to(original);
    cout << "Original: " << original << "  Result: " << result << endl;
    return 0;
}



