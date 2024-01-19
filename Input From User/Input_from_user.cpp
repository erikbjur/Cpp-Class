#include <iostream>

int main(){
    // Create a variable to store a single character from the keyboard
    char letter;

    // Ask the user for to type a single character
    std::cout << "Type a single character: " << std::endl;

    // Use the get() function to capture a single key press of the keyboard
    std::cin.get(letter);

    // Print the letter you typed
    std::cout << "You typed a " << letter << std::endl;

    return 0;
}