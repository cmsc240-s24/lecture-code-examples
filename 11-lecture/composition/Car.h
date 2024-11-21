#include "Engine.h"
#include "Radio.h"
#include "Tire.h"
#include <string>
#include <vector>

class Car 
{
public:
    Car();
    void start();
    void stop();
    void inflateTire(int index, int psi);
    
private:
    // Car is composed of an Engine class, Radio class, and four Tire classes.
    Engine engine;
    Radio radio;
    Tire tires[4];
    static std::vector<std::string> MY_VECTOR;
};
