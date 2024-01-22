#include <iostream>

int main() {
    // Here we create an int on the stack
    int number = 10;

    // Here we create a pointer, which only stores the address to an int variable
    int* ptr_to_number;

    // To assign the address of "number" we use the "&" in front of the variable name
    ptr_to_number = &number;

    // Print the value of the number
    std::cout << "Number = " << number << std::endl;
    // Print the value of the pointer, which will be the address of the pointer
    std::cout << "ptr_to_number = " << ptr_to_number << std::endl;
    // Dereference the pointer to get the value stored at the address
    std::cout << "*ptr_to_number = " << *ptr_to_number << std::endl;

    // Now we can store a different value for "number".
    number = 15;

    // Print the value of the number
    std::cout << "Number = " << number << std::endl;
    // Print the value of the pointer, which will be the address of the pointer
    std::cout << "ptr_to_number = " << ptr_to_number << std::endl;
    // Dereference the pointer to get the value stored at the address
    std::cout << "*ptr_to_number = " << *ptr_to_number << std::endl;

    // Now we can assign a value to the pointer
    *ptr_to_number = 5;

    // Print the value of the number
    std::cout << "Number = " << number << std::endl;
    // Print the value of the pointer, which will be the address of the pointer
    std::cout << "ptr_to_number = " << ptr_to_number << std::endl;
    // Dereference the pointer to get the value stored at the address
    std::cout << "*ptr_to_number = " << *ptr_to_number << std::endl;

    // Now testing copying addresses to other pointers.
    std::cout << "Now testing copying addresses to other pointers." << std::endl;
    // Initialize a and b.
    int a = 5;
    int b = 10;

    // Assign the address of "a" to ptr_A
    int* ptr_A = &a;
    // Copy the pointer that holds the address of "a", to the pointer c
    int* ptr_C = ptr_A;
    // Dereference this pointer and change the value to 15
    *ptr_C = 15;

    // Now print the value of a and the value pointed to by ptr_C
    std::cout << "a = " << a << std::endl;
    std::cout << "*ptr_C = " << *ptr_C << std::endl;


    return 0;
}