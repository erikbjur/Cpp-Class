#include <iostream>

int main() {
    // Lets use the functions above to do math
    int i_first_number = 5;
    int i_second_number = 2;

    // Here we add the two int variables using the int version of Add()
    std::cout << i_first_number << " + " 
        << i_second_number << " = " 
        // There will be an error on the next line
        // Because "MathFunctions" isn't defined until line 19.
        << MathFunctions::Add(i_first_number, i_second_number) << std::endl;
    
    return 0;
}

// Here's the math functions we need above.
namespace MathFunctions {
    void PrintAddingInts() {
        std::cout << "Adding ints using Add(int a, int b)" << std::endl;
    }

    int Add(int a, int b){
        return a + b;
    }
}