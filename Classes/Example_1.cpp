#include <iostream>
#include <string>

class Dog {
    public:
    int Age = 0;
    std::string Name;

    void Bark(){
        std::cout << "Bark Bark Bark\n";
    }
};

int main() {
    // Lets create a new dog
    Dog myDog;

    // Lets give our dog a name
    myDog.Name = "Fido";

    // How old is our dog
    myDog.Age = 3;

    // Now lets print info about our dog
    std::cout << "Our dogs name is " << myDog.Name << std::endl;
    std::cout << "Our dog is " << myDog.Age << " years old.\n";
    std::cout << "All he does is... ";
    myDog.Bark();

    return 0;
}