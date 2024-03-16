#include "Car.h"
using namespace std;

Car::Car(string make, string model, int year, string color,
         double price, string engineType, int horsepower) 
    : make{make}, model{model}, year{year}, 
      color{color}, price{price}, engine{engineType, horsepower}
{ }

Car::Car(json jsonDoc)
{
    fromJson(jsonDoc);
}

void Car::drive() 
{
    engine.start();
}

json Car::toJson()
{
    return json{{"Make", make}, {"Model", model}, {"Year", year},
                {"Color", color}, {"Price", price}, 
                {"Engine", engine.toJson()}};
}

void Car::fromJson(json jsonDoc)
{
  jsonDoc.at("Make").get_to(make);
  jsonDoc.at("Model").get_to(model);
  jsonDoc.at("Year").get_to(year);
  jsonDoc.at("Color").get_to(color);
  jsonDoc.at("Price").get_to(price);
  engine = Engine{jsonDoc.at("Engine")};
}
