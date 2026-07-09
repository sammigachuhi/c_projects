#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;

Cat::Cat (string name, double weight) : Animal (name, weight) {

};

string Cat::makeNoise() const {
    return "Meow";
}

string Cat::eat() const {
    return "I eat rats.";
}

void Cat::chaseMouse() const {
    cout << "Running after the mouse!" << endl;
}







