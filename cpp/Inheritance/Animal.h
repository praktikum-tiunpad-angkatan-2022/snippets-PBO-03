#pragma once

class Animal {
    protected:
        int legCount;
    public:
        Animal() : legCount(2) {}
        Animal(int legCount) : legCount(legCount) {}
        void setLegCount(int legCount) {
            this->legCount = legCount;
        }
        int getLegCount() {
            return this->legCount;
        }
};