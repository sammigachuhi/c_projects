#ifndef DRONE_H
#define DRONE_H

#include <iostream>
#include <string>
using namespace std;

class Drone {
    public:
        Drone (string modelName, double batteryLife);

        // getters 
        string getModelName() const;
        double getBatteryLife() const;

    private:
        string modelName;
        double batteryLife;
};


#endif




















