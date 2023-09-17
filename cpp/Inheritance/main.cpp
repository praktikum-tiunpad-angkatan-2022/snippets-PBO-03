#include <iostream>
#include "Cat.h"

int main() {
    Cat felis;
    std::cout << "Felis has " << felis.getLegCount() << " legs." << '\n';
    felis.setLegCount(felis.getLegCount() - 1);
    std::cout << "Ouch, felis now has " << felis.getLegCount() << " legs." << '\n';
    return 0;
}