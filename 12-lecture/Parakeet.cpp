#include <iostream>
#include "Parakeet.h"
using namespace std;

Parakeet::Parakeet(std::string name, int age, float featherLength, float span)
: Animal(name, age), featherLength{featherLength}, wingspan{span}
{
    cout << "Parakeet constructor..." << endl;
}

void Parakeet::setFeatherLength(int num)
{
    featherLength = num;
}

void Parakeet::setWingspan(float span)
{
    wingspan = span;
}

void Parakeet::speak()
{
    cout << "Parakeet says chirrups, whistles, chatter, trills and various other snippets they've picked up..." << endl;
}
