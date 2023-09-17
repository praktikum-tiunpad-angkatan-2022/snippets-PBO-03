#pragma once
#include "Animal.h"

/*
The override keyword serves two purposes:

It shows the reader of the code that "this is a virtual method, that is overriding a virtual method of the base class."
The compiler also knows that it's an override, so it can "check" that you are not altering/adding new methods that you think are overrides.
*/
class Cat : public Animal {
    public:
        Cat(std::string name) : Animal(name) {}
        void walk() override {
            std::cout << "This cute " << name << " walks!" << std::endl;
        }
};