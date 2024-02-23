#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
// #include "Zebra.h"
// #include "Monkey.h"
// #include "Snake.h"

// Add your header here
#include "Parakeet.h"


using namespace std;

int main()
{
    // Create a dog and a cat.
    Dog woofer{"Woofer", 3, 36.4};
    Cat cheddar{"Cheddar", 5, 3.1};
    
    // Add an instance of your animal here.
    Parakeet josh{"Josh", 2, 1.2, 12.2};
    // Monkey george{"George", 3, 5};
    // Zebra bro{"Bro", 20, 2.5};
    // Snake thomas{"Thomas", 20, 2, false, 250};

    // Create a vector of animal pointers.
    vector<Animal*> animals;

    // Add your animal to the vector
    animals.push_back(&woofer);
    animals.push_back(&cheddar);
    animals.push_back(&josh);
    // animals.push_back(&george);
    // animals.push_back(&bro);
    // animals.push_back(&thomas);

    
    // Have the animals eat.
    for (Animal* aPtr : animals)
    {
        aPtr->eat();
    }

    // Have the animals speak.
    
    for (Animal* aPtr : animals)
    {
        aPtr->speak();
    }
    
    return 0;
}