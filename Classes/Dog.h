#pragma once
#include <string>

namespace Animals {
    class Dog {
        public:
        int Age = 0;
        std::string Name;

        void Bark();
        void BegForFoot();
    };
}