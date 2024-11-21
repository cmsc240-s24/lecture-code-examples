#ifndef TOASTER_H
#define TOASTER_H
#include <string>
#include <vector>



class Toaster
{
public:
    Toaster(int initialLevel);
    void toast();
    void cancel();
    bool isOn();
    int getLevel();
    void setLevel(int newLevel);
    void operator++(){ this->heatLevel++; };
    static int DEFAULT_LEVEL;
private:
    std::string rotor;
    int heatLevel;
    bool isToasting;
    bool isValidLevel(int level);
    std::vector<std::string> myStringsVector;

};

#endif