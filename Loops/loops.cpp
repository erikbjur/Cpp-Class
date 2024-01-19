#include <iostream>

int main() {
    //Lets count to 1000

    // A "for loop" does the following:
    //      1. Starts counting from one number
    //      2. Checks the current number, usually if it's less than or greater than another number
    //      3. Increases or decreases the number
    for( int i = 0; i < 1000; i++ ) {
        // So above we created an int to hold our counter "i"
        // Then each time we loop through, we check if the counter "i" is less than 1000
        // Then we add 1 to the counter "i"

        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;
    }

    // All done, now let everyone know we finished successfully
    return 0;
}