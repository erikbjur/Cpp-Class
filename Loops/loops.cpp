#include <iostream>

int main() {
    // Lets count to 5 using a for loop

    // A "for loop" does the following:
    // 1. Starts counting from one number
    // 2. Checks the current number, usually if it's less than or greater than another number
    // 3. Increases or decreases the number
    std::cout << "For Loop - Counting Forward..." << std::endl;
    for( int i = 1; i <= 5; i++ ) {
        // So above we created an int to hold our counter "i"
        // Then each time we loop through, we check if the counter "i" is less than 5
        // Then we add 1 to the counter "i" with i++, which is exactly the same thing as i = i + 1;

        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;
    }

    std::cout << "For Loop - Counting Backwards..." << std::endl;
    for( int i = 5; i >= 1; i-- ) {
        // So above we created an int to hold our counter "i"
        // Then each time we loop through, we check if the counter "i" is greater than or equal to 1
        // Then we subtract 1 from the counter "i" with i--, exactly the same as i = i - 1;

        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;
    }

    // Now lets do the same thing with a "While Loop"

    std::cout << "Starting While Loop - Counting forward" << std::endl;
    int i = 0;
    while( i <= 5 ) {
        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;

        // Now we add 1 to the counter "i"
        i++;  // Means exactly the same thing as i = i + 1;
    }

    std::cout << "Starting While Loop - Counting backwards" << std::endl;
    i = 5; // Note we don't put the "int" in front of this "i"
            // because we already defined it on line 40

    while( i >= 1 ) {
        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;

        // Now we subtract 1 from the counter "i"
        i--;  // Means exactly the same thing as i = i - 1;
    }

    // Now lets use a different version of a "While" loop called a "Do While".
    std::cout << "Starting Do While Loop - Counting forward" << std::endl;
    i = 0;
    do
    {
        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;
        // Now we add 1 to the counter "i"
        i++;  // Means exactly the same thing as i = i + 1;
    } while (i <= 5);

    std::cout << "Starting Do While Loop - Counting backwards" << std::endl;
    i = 5;
    do
    {
        // So each time through the loop we will print the current counter "i"
        std::cout << "Counter = " << i << std::endl;
        // Now we subtract 1 from the counter "i"
        i--;  // Means exactly the same thing as i = i - 1;
    } while (i >= 1);
    

    // All done, now let the operating system know we finished successfully
    return 0;
}