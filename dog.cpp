#include <iostream>
#include "dog.h"

using namespace std;

Dog::Dog() : Dog("Unknown", 0) {}

Dog::Dog(string n, int a) : name(n), age(a) {
    cout << "Dog created\n";
}

Dog::~Dog() {
    cout << "Dog destroyed\n";
}

void Dog::bark() {
    cout << name << " says: Woof!\n";
}