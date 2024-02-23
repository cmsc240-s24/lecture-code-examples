#include <iostream>
#include "Monkey.h"
using namespace std;

Monkey::Monkey(std::string name, int age, int bananas)
: Animal(name, age), bananas{bananas}
{
    cout << "Monkey constructor..." << endl;
}

bool Monkey::isClimbing()
{
    swinging = !swinging;
}

void Monkey::speak()
{
    cout << "Monkey says ooh ooh ah ah..." << endl;
}