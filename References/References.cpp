// We need to include code that enables us to print to the terminal
#include <iostream>

int main() {
    // Lets make some variables
    int number = 5;

    // Now lets make a reference of number
    int& ref = number;

    // Now ref is a reference to number, so what ever we do to ref, we do to number
    std::cout << "Number = " << number << std::endl;
    std::cout << "Ref = " << ref << std::endl;

    // Lets print the address of each
    std::cout << "Address of number = " << &number << std::endl;
    std::cout << "Addresss of ref" << &ref << std::endl;

    // Now lets change the value of ref and notice that number also changes
    ref = 10;
    std::cout << "We changed the value of ref to be 10..." << std::endl;
    std::cout << "Number = " << number << std::endl;
    std::cout << "Ref = " << ref << std::endl;

    // This is where we return the success status.
    return 0;
}