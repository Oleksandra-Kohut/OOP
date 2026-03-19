#include <iostream>
#include "cat.h"
#include "dog.h"
#include "bird.h"

    using namespace std;

    int main() {

        Dog d1("Rex", 3);
        Cat c1("Murka", "gray");
        Bird b1("Eagle");

        d1.bark();
        c1.meow();
        b1.fly();

        return 0;
    }
