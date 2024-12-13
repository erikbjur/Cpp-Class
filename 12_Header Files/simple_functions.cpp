#include <iostream>

// Below we "include" our header file that has all of the
// definitions of the functions, PrintAddingInts(), Add(int a, int b)
#include "headerfile.h"

int main() {
    // Lets use the functions above to do math
    int i_first_number = 5;
    int i_second_number = 2;

    // Here we add the two int variables using the int version of Add()
    std::cout << i_first_number << " + " 
        << i_second_number << " = " 
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

/*  We can also show the above functions like this:
void MathFunctions::PrintAddingInts() {
    std::cout << "Adding ints using Add(int a, int b)" << std::endl;
}

int MathFunctions::Add(int a, int b) {
    return a + b;
}
*/