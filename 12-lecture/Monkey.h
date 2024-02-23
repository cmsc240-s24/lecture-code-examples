#ifndef MONKEY_H
#define MONKEY_H
#include <string>
#include "Animal.h"

class Monkey : public Animal
{
public:
    Monkey(std::string name, int age, int bananas);
    bool isSwinging();
    void speak();
private:
    int bananas;
    bool swinging;
};

#endif