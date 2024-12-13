#include <iostream>

// Here we add a name space.  This helps us to group code together.
namespace MathFunctions {
    void PrintAddingInts() {
        std::cout << "Adding ints using Add(int a, int b)" << std::endl;
    }

    void PrintAddingDoubles() {
        std::cout << "Adding doubles using Add(double a, double b)" << std::endl;
    }

    int Add(int a, int b){
        return a + b;
    }

    double Add( double a, double b) {
        return a + b;
    }

    int Subtract(int a, int b){
        return a - b;
    }

    double Subtract( double a, double b) {
        return a - b;
    }
}

int main() {
    // Lets use the functions above to do math
    int i_first_number = 5;
    int i_second_number = 2;

    double d_first_number = 5.0;
    double d_second_number = 2.0;

    // Call a simple void function that doesn't return anything.
    // This function takes no parameters and just prints the function name called below
    // Note to get the print functions above, we need to start with the namespace name
    MathFunctions::PrintAddingInts();

    // Here we add the two int variables using the int version of Add()
    std::cout << i_first_number << " + " 
        << i_second_number << " = " 
        << MathFunctions::Add(i_first_number, i_second_number) << std::endl;
    // Notice how in c++ we can break up long lines on multiple lines and nothing bad happens

    // Call a simple void function that doesn't return anything.
    // This function takes no parameters and just prints the function name called below
    // Note to get the print functions above, we need to start with the namespace name
    MathFunctions::PrintAddingDoubles();

    // Here we add the two double variables using the int version of Add()
    std::cout << d_first_number << " + " 
        << d_second_number << " = " 
        << MathFunctions::Add(d_first_number, d_second_number) << std::endl;
    
    return 0;
}