#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(string name, double weight) {
    this -> name = name;
    this -> weight = weight;
}

void Animal::setName(string name) {
    this -> name = name;
}

void Animal::setWeight(double weight) {
    this -> weight = weight;
}

string Animal::getName() const {
    return name;
}

double Animal::getWeight() const {
    return weight;
}

string Animal::makeNoise() {
    return "Unknown";
}

void Animal::display() const {
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
}







