#include "Dog.h"
#include <iostream>
#include <stdexcept>
using namespace std; 

Dog::Dog(string breed) {
    this -> breed = breed;
}

string Dog::getBreed() const {
    if (breed != "Poodle") {
        return breed;
    } else {
        throw runtime_error("That doesn't even deserve the title 'dog'");
    }

}










