#if !defined(BIRD_H) // its used bcoz if included bird.h again n again it will consider only 1time
#define BIRD_H
#include <iostream>
using namespace std;

class Bird {
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
};

class Sparrow : public Bird {
    public:
    void eat() {
        cout << "Sparrow is Eating" << endl;
    }
    void fly() {
        cout << "Sparrow is Flying" << endl;
    }
};

class Pigeon : public Bird {
    public:
    void eat() {
        cout << "Pigeon is Eating" << endl;
    }
    void fly() {
        cout << "Pigeon is Flying" << endl;
    }
};

#endif // BIRD_H