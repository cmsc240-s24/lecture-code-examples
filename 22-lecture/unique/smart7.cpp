#include <iostream>
#include <memory>
using namespace std;

void processPointers(unique_ptr<int>& unique)
{
    // Print the contents of the pointer.
    cout << *unique << endl; 
  

} // Pointer not free here, it is still in the main scope.


int main() 
{
    unique_ptr<int> x(new int(12));
    processPointers(x);
    return 0;
}