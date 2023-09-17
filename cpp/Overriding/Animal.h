#include <iostream>
#pragma once

class Animal {
    protected:
        std::string name;
    public:
        Animal(std::string name) : name(name) {}
        virtual void walk() {
            std::cout << name << " walks!" << std::endl;
        }
};