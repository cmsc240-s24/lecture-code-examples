#ifndef ENGINE_H
#define ENGINE_H
#include <json.hpp>
#include <string>
using namespace nlohmann;

class Engine 
{
public:
    Engine() {};
    Engine(std::string type, int horsepower);
    Engine(json jsonDoc);
    void start() { }
    void stop() { }
    json toJson();
    void fromJson(json jsonDoc);
private:
    std::string type;
    int horsepower;
};

#endif