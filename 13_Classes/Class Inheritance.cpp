#include "Dog.h"
#include "Labrador.h"

#include <iostream>

int main() {
    // Lets create a new dog
    Animals::Labrador myLab;

    // Lets give our dog a name
    myLab.Name = "Fido";

    // How old is our dog
    myLab.Age = 3;

    // Set our lab is a black lab
    myLab.SetIsBlackLab( true );

    // Now lets print info about our dog
    std::cout << "Our dogs name is " << myLab.Name << std::endl;
    std::cout << "Our dog is " << myLab.Age << " years old.\n";
    std::cout << "All he does is... ";
    myLab.Bark();
    myLab.BegForFood();
    myLab.ChaseBirds();

    return 0;
}