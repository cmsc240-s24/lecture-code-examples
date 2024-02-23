#include <iostream>
#include "Snake.h"
using namespace std;

Snake::Snake(string name, int age, float fangLength, bool isVenomous, int constrictionPower)
: Animal(name, age), fangLength{fangLength}, isVenomous{isVenomous}, constrictionPower{constrictionPower}
{
    this.isVenomous = isVenomous
    this.fangLength = fangLength
    cout << "Snake constructor..." << endl;
}

// constrictionPower is equivalent to the max weight of the animal the snake can concstrict to death, in lbs.
void Snake::constrictionPower(int num);
{
    constrictionPower = num;
}

void Snake::speak()
{   
    cout << "HISSSss" << endl; 
    cout << "Snake says do you have a minute to hear about your car's extended warranty..." << endl;
    cout << "Snake says I want two heads" << endl;
    cout << "Hisssss" << endl; 
}

bool Snake::isVenomous(){
    return isVenomous;
}
