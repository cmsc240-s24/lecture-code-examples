#ifndef PARAKEET_H
#define PARAKEET_H
#include <string>
#include "Animal.h"

class Parakeet : public Animal
{
public:
    Parakeet(std::string name, int age, float featherLength, float span);
    void setFeatherLength(int num);
    void setWingspan(float span);
    void speak();
private:
    float wingspan;
    float featherLength;
};

#endif