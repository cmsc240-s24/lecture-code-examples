
#include "Toaster.h"
#include <iostream>
using namespace std;

int main()
{

    cout << Toaster::DEFAULT_LEVEL << endl;

    // Create a new instance of the Toaster class
    Toaster myToaster{10};

    myToaster++;

    


}