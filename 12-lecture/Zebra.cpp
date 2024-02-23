#include "Zebra.h"

Zebra::Zebra(string name, int age, float height)
: Animal(name, age) , height{height}
{
    cout << "Zebra constructor..." << endl;
}


Zebra::speak() {
  std::cout << "🦓🦓Zebra brays!🦓🦓" << std::endl;
}

