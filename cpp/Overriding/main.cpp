#include <iostream>
#include "Animal.h"
#include "Cat.h"

int main() {
    Animal animal("animal");
    animal.walk();
    Cat felis("cat");
    felis.walk();
    return 0;
}