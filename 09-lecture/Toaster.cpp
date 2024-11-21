#include "Toaster.h"
#include <vector>


Toaster::Toaster(int initialLevel) 
: heatLevel{initialLevel}
{
    myStringsVector.push_back("String 1");
    myStringsVector.push_back("String 2");
    myStringsVector.push_back("String 3");
    myStringsVector.push_back("String 4");
    myStringsVector.push_back("String 5");
    heatLevel = initialLevel;
    setLevel(initialLevel);
}

void Toaster::toast() 
{ 
    isToasting = true; 
}

void Toaster::cancel()
{
    isToasting = false;
}

bool Toaster::isOn() 
{
    return isToasting;
}

int Toaster::getLevel()
{
    return heatLevel;
}

void Toaster::setLevel(int newLevel)
{
    if (isValidLevel(newLevel))
    {
        heatLevel = newLevel;
    }
}

bool Toaster::isValidLevel(int level)
{
    return level >= 1 && level <= 7;
}

int Toaster::DEFAULT_LEVEL = 10;