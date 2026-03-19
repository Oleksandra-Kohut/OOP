#ifndef LABA1_CAT_H
#define LABA1_CAT_H

#include <string>
using namespace std;

class Cat {
private:
    string name;
    string color;

public:
    Cat();
    Cat(string n, string c = "black");
    ~Cat();

    void meow();
};

#endif