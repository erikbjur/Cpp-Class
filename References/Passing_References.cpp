#include <iostream>

// The value "number_to_square" is passed by reference using the int& syntax
void SquareNumber( int& number_to_square ) {
    number_to_square = number_to_square * number_to_square;
}

int main() {
    // Lets make a variable
    int number = 5;
    std::cout << "The original number was " << number << std::endl;

    // Pass the number to the function above to square it
    SquareNumber( number );

    // Now print the squared number
    std::cout << "The squared number is " << number << std::endl;
    
    return 0;
}