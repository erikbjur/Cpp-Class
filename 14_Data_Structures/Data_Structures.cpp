#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>

int main()
{
    //////////////// Vectors ///////////////////////
    // Define a vector of int's that stores prime numbers
    std::cout << "...VECTORS..." << std::endl;
    // Here's how you initialize a vector from a list of numbers
    std::vector<int> primes = {2, 3, 5, 7, 11};
    // Here's how you access index "2" which is the third element
    std::cout << "The Third element or Index 2 of the vector is: ";
    std::cout << primes[2] << std::endl; // Outputs: 5

    primes.push_back(13); // Add 13 to the vector
    primes.push_back(17); // Add 17 to the vector
    primes.pop_back();    // Remove the last element of the vector...which is 17

    std::cout << "Printing the prime numbers from a vector..." << std::endl;
    for (int i = 0; i < primes.size(); i++)
    {
        std::cout << primes[i] << " ";
    }
    std::cout << std::endl << std::endl;
    // Outputs: 2 3 5 7 11 13

    ////////////// Stacks //////////////////
    // These are Last-In-First-Out
    std::cout << "...STACKS..." << std::endl;
    std::stack<int> tower;

    tower.push(3);
    tower.push(2);
    tower.push(1);

    std::cout << "Printing the stack:\n";
    while (!tower.empty())
    {
        std::cout << tower.top() << " ";
        tower.pop();
    }
    // Outputs: 1 2 3
    std::cout << std::endl << std::endl;

    ////////////// Queues //////////////////
    // These are First-In-First-Out
    std::cout << "...QUEUES..." << std::endl;
    std::queue<int> order;

    order.push(10);
    order.push(9);
    order.push(8);

    std::cout << "Printing the Queue:\n";
    while (!order.empty())
    {
        std::cout << order.front() << " ";
        order.pop();
    }
    // Outputs: 10 9 8
    std::cout << std::endl << std::endl;

    /////////////// Sets ///////////////////
    // Sets contain elements but no duplicates
    std::cout << "...SETS..." << std::endl;
    std::unordered_set<int> prime_set({2, 3, 5, 7});

    prime_set.insert(11);
    prime_set.insert(13);
    prime_set.insert(11); // Duplicates are not inserted

    prime_set.erase(2);
    prime_set.erase(13);

    // Outputs: primes does not contain 2.
    if (prime_set.count(2))
        std::cout << "primes contains 2.\n";
    else
        std::cout << "primes does not contain 2.\n";

    // Outputs: Size of primes: 4
    std::cout << "Size of primes: " << prime_set.size() << "\n";
    std::cout << std::endl << std::endl;

    // Prints the full set of primes
    std::cout << "Printing all of the numbers in the set:\n";
    for (auto &number : prime_set)
    {
        std::cout << number << std::endl;
    }
    std::cout << std::endl;

    /////////////// Maps ///////////////////
    // A map stores elements by a unique key
    std::cout << "...MAPS..." << std::endl;
    std::unordered_map<int, std::string> students;

    // Add students with a student ID as the key
    // Note that since we're creating the pair of key and student name
    // we put the pair in { } brackets.
    students.insert({1, "Bob"});
    students.insert({2, "Joe"});
    students.insert({3, "Fred"});
    students.insert({4, "Chuck"});
    students.insert({5, "Bill"});

    // We can get the student by just searching for the ID of the student
    std::cout << "The student with ID = 3 is " << students[3] << std::endl;

    // We can erase a student in the same way
    students.erase(3);

    // Now print of all of the students to see Fred is gone
    std::cout << "Printing all of the students in the map:\n";
    for (auto &[id, student] : students)
    {
        std::cout << "Student ID: " << id << " Name: " << student << std::endl;
    }
    std::cout << std::endl;

    return 0;
}