#include "Dog.h"
#include <iostream>

void Animals::Dog::Bark() {
    std::cout << "Bark Bark Bark\n";
}

void Animals::Dog::BegForFoot() {
    std::cout << "Hey! Give me some food!\n";
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
