#include "Engine.h"
using namespace std;

Engine::Engine(string type, int horsepower) 
    : type{type}, horsepower{horsepower} 
{ }

Engine::Engine(json jsonDoc)
{
    fromJson(jsonDoc);
}

json Engine::toJson()
{
    return json{{"Type", type}, {"Horsepower", horsepower}};
}

void Engine::fromJson(json jsonDoc)
{
  jsonDoc.at("Type").get_to(type);
  jsonDoc.at("Horsepower").get_to(horsepower);
}


