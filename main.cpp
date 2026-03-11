#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // Конструктор за замовчуванням
    Dog() : Dog("Unknown", 0) {}

    // Конструктор з параметрами
    Dog(string n, int a = 1) : name(n), age(a) {
        cout << "Dog created\n";
    }

    // Деструктор
    ~Dog() {
        cout << "Dog destroyed\n";
    }

    void bark() {
        cout << name << " says: Woof!\n";
    }
};

class Cat {
private:
    string name;
    string color;

public:
    Cat() : Cat("NoName", "white") {}

    Cat(string n, string c = "black") : name(n), color(c) {
        cout << "Cat created\n";
    }

    ~Cat() {
        cout << "Cat destroyed\n";
    }

    void meow() {
        cout << name << " says: Meow!\n";
    }
};

class Bird {
private:
    string type;
    int wings;

public:
    Bird() : Bird("Parrot", 2) {}

    Bird(string t, int w = 2) : type(t), wings(w) {
        cout << "Bird created\n";
    }

    ~Bird() {
        cout << "Bird destroyed\n";
    }

    void fly() {
        cout << type << " is flying!\n";
    }
};

int main() {
    Dog d1("Rex", 3);
    Cat c1("Murka", "gray");
    Bird b1("Eagle");

    d1.bark();
    c1.meow();
    b1.fly();

    return 0;
}
