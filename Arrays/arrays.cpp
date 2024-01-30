#include <iostream>

int main() {
    // Create an array of int
    int numbers [5];

    // We can access the first number in the array like this:
    int number_from_array = numbers[0];

    // Note that the array of numbers isn't initialized to zero.
    // It's full of left over garbage
    std::cout << "The first number in the array is: " << number_from_array << std::endl;
    std::cout << "It was garbage left over from someone else" << std::endl;

    // So now we assign our own numbers to the array
    numbers[0] = 1; // This is the first number
    numbers[1] = 2; // This is the second number
    numbers[2] = 3; // This is the third number
    numbers[3] = 4; // This is the fourth number
    numbers[4] = 5; // This is the fifth number

    // Now print each number in the array
    std::cout << "Now printing each number in the array..." << std::endl;

    std::cout << "First number: " << numbers[0] << std::endl;
    std::cout << "Second number: " << numbers[1] << std::endl;
    std::cout << "Third number: " << numbers[2] << std::endl;
    std::cout << "Fourth number: " << numbers[3] << std::endl;
    std::cout << "Fifth number: " << numbers[4] << std::endl;

    return 0;
}