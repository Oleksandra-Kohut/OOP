#include <iostream>
#include "dog.h"
#include "cat.h"
#include "bird.h"

using namespace std;

int main() {

    Dog d1("Rex", 3);
    d1.bark();

    Cat c1("Murka", "gray");
    c1.meow();

    Cat c2 = c1;

    Cat c3 = Cat("Barsik", "white");

    c3.meow();

    c1.setName("Tom");
    c1.meow();

    const Cat c4("ConstCat", "black");
    c4.meow();

    cout << "Cats created: " << Cat::getCount() << endl;

    Cat c5 = -c1;
    cout << c5 << endl;

    Cat c6 = c1 + c3;
    cout << c6 << endl;

    Cat c7;
    cin >> c7;
    cout << c7 << endl;

    Bird b1("Eagle");
    b1.fly();


    return 0;
}