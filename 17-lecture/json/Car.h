#ifndef CAR_H
#define CAR_H
#include <json.hpp>
#include <string>
#include "Engine.h"
using namespace nlohmann;

class Car 
{
public:
    Car() { };
    Car(std::string make, std::string model, int year, std::string color, 
        double price, std::string engineType, int horsepower);
    Car(json jsonDoc);
    void drive();
    json toJson();
    void fromJson(json jsonDoc);
private:
    std::string make;
    std::string model;
    int year;
    std::string color;
    double price;
    Engine engine;
};

#endif