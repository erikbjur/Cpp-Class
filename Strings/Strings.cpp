#include <iostream>
#include <string>

int main () {
    // Using an array of char's
    char name[5] = "Test";
    // We would have to access each letter one by one.
    std::cout << name[0] << name[1] << name[2] << name[3] << std::endl;

    // Here we are creating a "std::string" object and assigning text to it.
    std::string text = "Longer Test";
    std::cout << text << std::endl;

    // Here we can reassign a different piece of text
    text = "Shorter test";
    std::cout << text << std::endl;

    return 0;
}