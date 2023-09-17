#pragma once
#include "Animal.h"

class Cat : public Animal {
    public:
        // There's no such "super()" thing in C++, although you can provide your own typedef
        Cat() : Animal(4) {}
};