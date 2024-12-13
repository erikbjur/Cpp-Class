#include <iostream>

// Lets make a simple class.  No need for a header file because we can define the
// whole thing right here and then use it.

class Person
{
    public:
    std::string FirstName;
    std::string LastName;
    int Age;

    void PrintNameAndAge()
    {
        std::cout << this->FirstName << " " << this->LastName
                  << " " << "is " << this->Age << " years old" << std::endl;
    }

};

int main()
{
    // Lets make a couple entities on the heap (memory we will need to delete later
    // or we will have a memory leak).
    // Here we make person1 a pointer, which holds the memory address
    // of the "new" Entity, we just created on the memory heap
    Person* person_1 = new Person();

    // Lets give it a name and age.
    // Note that because we are working with pointers,
    // We use the "->"" symbol vs the dot "."
    person_1->FirstName = "Joe";
    person_1->LastName = "Diggidy";
    person_1->Age = 16;

    // Now lets make another Person
    Person* person_2 = new Person();
    person_2->FirstName = "Santa";
    person_2->LastName = "Clause";
    person_2->Age = 900;

    // Now lets use the class method "PrintNameAndAge()" to print the info for each person
    person_1->PrintNameAndAge();
    person_2->PrintNameAndAge();

    // Now this is SUPER IMPORTANT... if you use the "new" keyword to allocate memory,
    // you MUST use "delete" when you are done using that memory, or you will have a memory leak
    delete person_1;
    delete person_2;

    // All done.
    return 0;
}

