#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

    Animal myAnimal("cow", 120.2);

    cout << "-------- My Animal Charateristics-------------" << endl;
    cout << "Animal name: " << myAnimal.getName() << endl;
    cout << "Animal name: " << myAnimal.getWeight() << endl;
    cout << "Animal noise: " << myAnimal.makeNoise() << endl;
    cout << "---Display function test---" << endl;
    myAnimal.display();

    // Update name of animal and weight
    myAnimal.setName("Aberdeen");
    myAnimal.setWeight(200.7);

    cout << "\n------Improved Animal Characteristics----------" << endl;
    cout << "Animal name: " << myAnimal.getName() << endl;
    cout << "Animal name: " << myAnimal.getWeight() << endl;
    cout << "Animal noise: " << myAnimal.makeNoise() << endl;
    cout << "---Updated Display function test---" << endl;
    myAnimal.display();

    return 0;
}
















