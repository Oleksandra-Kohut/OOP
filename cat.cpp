#include <iostream>
#include "cat.h"

using namespace std;

Cat::Cat() : Cat("NoName", "white") {}

Cat::Cat(string n, string c) : name(n), color(c) {
    cout << "Cat created\n";
}

Cat::~Cat() {
    cout << "Cat destroyed\n";
}

void Cat::meow() {
    cout << name << " says: Meow!\n";
}