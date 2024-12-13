#include "Dog.h"
#include <iostream>

void Animals::Dog::Bark() {
    std::cout << "Bark Bark Look at me I'm a dog\n";
}

void Animals::Dog::BegForFood() {
    std::cout << "Hey, I'm a dog! Give me some food!\n";
}

Animals::Dog::Dog()
{
    std::cout << "Constructor for Dog" << std::endl;
}

Animals::Dog::~Dog()
{
    std::cout << "Destructor for Dog" << std::endl;
}

// We can also list the methods in the namespace like this:
// namespace Animals {
//     void Dog::Bark() {
//         std::cout << "Bark Bark Bark\n";
//     }
//     void Dog::BegForFoot() {
//         std::cout << "Hey! Give me some food!\n";
//     }
// }
