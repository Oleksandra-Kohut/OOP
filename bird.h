#ifndef LABA1_BIRD_H
#define LABA1_BIRD_H

#include <string>
using namespace std;

class Bird {
private:
    string type;
    int wings;

public:
    Bird();
    Bird(string t, int w = 2);
    ~Bird();

    void fly();
};

#endif