#ifndef BIRD_H
#define BIRD_H

#include <iostream>
using namespace std;

// Interface
class Bird {
public:
    virtual void eat() {
        cout << "eating ";
    }

    virtual void fly() {
        cout << "flying ";
    }
};

// Implementation
class Sparrow : public Bird {
public:
    void eat()  {
        cout << "sparrow eating";
    }
    void fly()  {
        cout << "sparrow flying";
    }
};

#endif

