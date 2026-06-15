#include "FuelLevelCritical.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


void checkFuelLevel (int fuelLevel);

int main() {

    int fuelLevel;

    cout << "Insert the current fuel level (%) from the gauge reading: " << endl;
    cin >> fuelLevel;

    try {
        checkFuelLevel(fuelLevel);
    } catch (const FuelLevelCritical& err) {
        cout << "Exception: " << endl;
        cout << err.what() << endl;
    }

    return 0;
}

void checkFuelLevel (int fuelLevel) {
    if (fuelLevel < 10) {
        throw FuelLevelCritical();
    } else if (fuelLevel < 20) {
        throw FuelLevelCritical("Warning! Fuel levels are below 20%");
    }
}





















