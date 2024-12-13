// We need to include code that enables us to print to the terminal
#include <iostream>

// Every c++ program starts with the "main" function.
// When a program is started this function is the entry point.
// The "int" that is infront of "main" is the return typ of the function
// When the program is finished, it will return a zero to show it finished successfully

int main() {
    // We use a function called "cout" to display text to the terminal
    // This function cout is found in the "standard library" in the "iostream" header file
    // To enable the compiler to find the cout function we tell it to look in the standard library.
    // We do this by writing "std::" which is then followed by the name of the item in the library.
    // We then follow this with a special operator "<<" which is used by the cout function to string
    // together the items to be outputted to the terminal.
    // To move to the next line, we can either use the endl function or a special character "\n"
    std::cout << "Hello World!" << std::endl;
    std::cout << "We can also finish a line like this.\n";

    // This is where we return the success status.
    return 0;
}