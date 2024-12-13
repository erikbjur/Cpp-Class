#pragma once
#include <string>

namespace Animals {
    class Dog {
        public:
        int Age = 0;
        std::string Name;

        virtual void Bark();
        virtual void BegForFood();

        // This is the constructor for our dog object
        Dog();
        // This is the destructor for our dog object.
        // It's virtual so that any class that derives from it
        // will make sure that the correct destructor is called.
        virtual ~Dog();
    };
}