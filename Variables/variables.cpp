#include <iostream>

int main() {
    // Create a variable to store the first number
    // This variable will be of type int.
    int first_number;

    // Now assign the number 5 to the first number
    first_number = 5;

    // Create a variable to store the second number
    // We will create and initialized this variable in one shot
    int second_number {2};  // This is faster and more efficient

    // Add the two numbers together and store in a new variable called result
    int result = first_number + second_number;

    // Now print the result
    // Notice that I can break the full line of code into two lines
    // The compiler doesn't care because the end of the command will end with a ";"
    std::cout << first_number << " + " << second_number << " = "
        << result << std::endl;

    // Program finished successfully
    return 0;
}