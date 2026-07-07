#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

    // Animal myAnimal("cow", 120.2);
    Dog dog("Rover", 80, "Greyhound");

    // key line
    Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");
    cout << "Make noise? " << dogPtr -> makeNoise() << endl;
    cout << "What did you say? " << dogPtr -> eat() << endl;

    delete dogPtr;
    dogPtr = nullptr;

    // cout << "-------- My Animal Charateristics-------------" << endl;
    // cout << "Animal name: " << myAnimal.getName() << endl;
    // cout << "Animal name: " << myAnimal.getWeight() << endl;
    // cout << "Animal noise: " << myAnimal.makeNoise() << endl;
    // cout << "---Display function test---" << endl;
    // myAnimal.display();

    // // Update name of animal and weight
    // myAnimal.setName("Aberdeen");
    // myAnimal.setWeight(200.7);

    // cout << "\n------Improved Animal Characteristics----------" << endl;
    // cout << "Animal name: " << myAnimal.getName() << endl;
    // cout << "Animal name: " << myAnimal.getWeight() << endl;
    // cout << "Animal noise: " << myAnimal.makeNoise() << endl;
    // cout << "---Updated Display function test---" << endl;
    // myAnimal.display();

    // cout << "Dog's name: " << dog.getName()  << endl;
    // cout << "Dog's weight: " << dog.getWeight() << endl;
    // cout << "Dog's noise: " << dog.makeNoise() << endl;
    // dog.digHole();
    // dog.chaseCat();


    return 0;
}
















