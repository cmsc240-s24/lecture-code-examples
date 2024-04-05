#include <iostream>
#include <fstream>
#include "Car.h"
using namespace std;

#define INDENT_SPACES 4

int main() 
{
    
    // Car mustang{"Ford", "Mustang", 2004, "Red", 38999.42, "V8", 301};

    // // Write JSON to a file.
    // ofstream outfile("mustang.json");
    // outfile << mustang.toJson().dump(INDENT_SPACES);
    // outfile.close();
    

    // Read JSON from a file.
    ifstream infile("mustang.json");
    json jsonFromFile = json::parse(infile);
    infile.close();

    Car mustang{jsonFromFile};

    cout << mustang.toJson().dump(INDENT_SPACES) << endl;

    return 0;
}



/*


    

    
*/