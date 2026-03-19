#ifndef LABA1_DOG_H
#define LABA1_DOG_H

#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    Dog();
    Dog(string n, int a = 1);
    ~Dog();

    void bark();
};

#endif // LABA1_DOG_H