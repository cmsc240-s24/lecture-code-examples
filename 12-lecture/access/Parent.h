#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

void Parent::publicMethod() {};
void Parent::protectedMethod() {};
void Parent::privateMethod() {};


class BaseClass 
{
public:
    BaseClass() { } 
    int publicData = 50;
    void publicMethod();

protected:
    int protectedData = 100;
    void protectedMethod();

private:
    int privateData = 150;
    void privateMethod();
};



#endif