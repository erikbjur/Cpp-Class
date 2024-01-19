#include <iostream>

int main(){
    // Create a variable to store an int
    int number;

    // Ask the user for to type a single character
    std::cout << "Type a single number: " << std::endl;

    // Use the cin function to get the number
    std::cin >> number;

    // Now check if the number is greater than 5
    if( number > 5 ) {
        std::cout << "The number is greater than 5" << std::endl;
    }
    else if( number == 5 ) {
        std::cout << "The number is equal to 5" << std::endl;
    }
    else {
        std::cout << "The number is less than 5" << std::endl;
    }

    return 0;
}