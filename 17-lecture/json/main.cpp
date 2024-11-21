#include <iostream>
#include <fstream>
#include "Car.h"
using namespace std;

#define INDENT_SPACES 4

int main() 
{
    // // Creating a new instance of the car class
    // Car mustang{"Ford", "Mustang", 2004, "Red", 38999.42, "V8", 301};

    // // Write JSON to a file.

    // // Open the file for writing.
    // ofstream outfile("mustang.json");

    // // Serializing the mustang instance of the car class.
    // json mustangJson =  mustang.toJson();   
    
    // // Taking the json class and converting it to string.
    // string mustangJsonAsString = mustangJson.dump(INDENT_SPACES); 
    
    // // Writing the string to a file.
    // outfile << mustangJsonAsString;

    // // Closing the file.
    // outfile.close();
    

    // Read JSON from a file.

    // Opening the json file for reading
    ifstream infile("mustang.json");
    
    // Use the library to parse the text JSON file into a JSON object.
    json jsonFromFile = json::parse(infile);

    // Close the file.
    infile.close();

    // Create a new instance of the mustang class from the json object.
    // This is reserializing the mustang class... ("Re-hydrating")
    Car mustang{jsonFromFile};

    mustang.drive();
    // Proving that it has been reloaded.
    cout << mustang.toJson().dump(INDENT_SPACES) << endl;

    return 0;
}



/*


    

    
*/