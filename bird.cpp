#include <iostream>
#include "bird.h"

using namespace std;

Bird::Bird() : Bird("Parrot", 2) {}

Bird::Bird(string t, int w) : type(t), wings(w) {
    cout << "Bird created\n";
}

Bird::~Bird() {
    cout << "Bird destroyed\n";
}

void Bird::fly() {
    cout << type << " is flying!\n";
}