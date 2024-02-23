#ifndef SNAKE_H
#define SNAKE_H
#include <string>
#include "Animal.h"

class Snake: public Animal
{
public:
    Snake(std::string name, int age, float fangLength, bool isVenomous, int constrictionPower);
    void constrictionPower(int num);
    bool isVenomous();
    void speak();
private:
    int constrictionPower;
    bool isVenomous;
    int fangLength;
};

#endif