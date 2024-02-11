#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number {};

    std::cin >> number;

    switch (number) {
        case 1: // This checks if number = 1
            std::cout << "It's 1\n";
            break;  // No need to check the rest, so break out
        case 2: // This checks if number = 2
            std::cout << "It's 2" << std::endl;
            break; // No need to check the rest, so break out
        default: // This only gets hit when none of the other cases were hit
            std::cout << "It's something else" << std::endl;
    }
    return 0;
}