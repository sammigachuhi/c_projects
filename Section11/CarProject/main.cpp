#include "Car.h"
#include <iostream>
#include <string>
#include <memory>
#include <iomanip>
using namespace std;

int main() {

    unique_ptr<Car> myCar = make_unique<Car>("Navy Blue", 4);

    cout << "---------- Car Details: --------------" << endl;
    cout << "Car colour: " << myCar -> getColour() << endl;
    cout << "No. of doors: " << myCar -> getNumDoors() << endl;

    // Move pointer to a new object of neighbours car
    auto neighboursCar = move(myCar);

    cout << "\n------- Neighbour's Car Details: ------------" << endl;
    cout << "Car colour: " << neighboursCar -> getColour() << endl;
    cout << "No. of doors: " << neighboursCar -> getNumDoors() << endl;

    return 0;
}




