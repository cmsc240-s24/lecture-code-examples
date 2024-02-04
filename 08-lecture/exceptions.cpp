#include <iostream>
#include <stdexcept>
using namespace std;

// Will throw an exception on bad input.
int area(int length, int width)     
{
    // Validate the inputs.
	if(length <= 0 || width <= 0)
    { 
        // Throw an invalid argument exception.
        throw invalid_argument{"Bad argument to area()"};
    }

    int result = length * width;

    // Check for an overflow in the result.
    if (result / length != width)
    {
        // Throw an overflow error exception.
        throw overflow_error{"Overflow occurred in area()"};
    }

	return result;
}



int main()
{
    int length, width;
    cout << "Enter values for length and width:" << endl;
    cin >> length >> width;
    
    try 
    {
        int result = area(length, width);
        cout << "Area == " << result << endl;
    }
    catch (invalid_argument exception)
    {
        cerr << "Invalid Argument!" << endl;
        exit(1);
    }
    catch (overflow_error exception)
    {
        cerr << "Overflow!" << endl;
        exit(1);
    }

    cout << "After try/catch block. Returning from main function." << endl;
    return 0;
}





