#ifndef FUEL_LEVEL_CRITICAL_H
#define FUEL_LEVEL_CRITICAL_H


#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


class FuelLevelCritical : public runtime_error {
    public:
        FuelLevelCritical() : runtime_error("Danger! Fuel levels are low (<10%)") {
        };

        FuelLevelCritical(const string& err) : runtime_error(err) {
        };

};


#endif
















