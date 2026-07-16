#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        Car(string colour, int numDoors);

        // Getters
        string getColour() const;
        int getNumDoors() const;

    private:
        string colour;
        int numDoors;
};


#endif