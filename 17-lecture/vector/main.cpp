#include <iostream>
#include <fstream>
#include <vector>
#include "Car.h"
using namespace std;

#define INDENT_SPACES 4

int main() 
{
    Car mustang{"Ford", "Mustang", 2004, "Red", 38999.42, "V8", 301};
    Car wrangler{"Jeep", "Wrangler", 2012, "Blue", 24500.17, "V6", 250};
    Car corvette{"Chevrolet", "Corvette", 2023, "Silver", 42399.85, "V8", 400};

    vector<Car> cars;
    cars.push_back(mustang);
    cars.push_back(wrangler);
    cars.push_back(corvette);

    // Creating an array of cars in the json object.
    json jsonOutput = json{{"cars", json::array()}};

    // For each car in my vector, store it in the json object.
    for (Car car : cars)
    {
        jsonOutput.at("cars").push_back(car.toJson());
    }

    // Write JSON to a file.

    // Open a file for write.
    ofstream outfile("cars.json");
    // Writing the json to disk.
    outfile << jsonOutput.dump(INDENT_SPACES);
    outfile.close();

//     vector<Car> cars;

//    // Read JSON from a file.
//     ifstream infile("cars.json");
//     json jsonFromFile = json::parse(infile);
//     infile.close();

//     // For each car in the JSON cars array
//     for (json carJson : jsonFromFile.at("cars"))
//     {
//         // Call the Car constructor, that takes a json object to 
//         // create a new car.
//         // Put this new car in the cars vector.
//         cars.push_back(Car{carJson});
//     }
    
//     // Print out for proof of concept
//     for (Car car : cars)
//     {
//         cout << car.toJson().dump(INDENT_SPACES) << endl;
//     }



    return 0;
}



/*
    cars.clear();

 
*/


