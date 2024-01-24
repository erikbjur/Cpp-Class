#include <iostream>

namespace MathFunctions {
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

    double d_first_number = 5;
    double d_second_number = 2;

    std::cout << i_first_number << " + " << i_second_number << " = " << MathFunctions::Add(i_first_number, i_second_number) << std::endl;
    return 0;
}

