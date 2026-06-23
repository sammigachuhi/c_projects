#include "Drone.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int NUM_OF_DRONES;
string modelName;
double batteryLife;


int main() {

    cout << "How many drones do you have: " << endl;
    cin >> NUM_OF_DRONES;

    vector<Drone*> dronePtrs(NUM_OF_DRONES);

    for (int i = 0; i < NUM_OF_DRONES; i++) {
        cout << "Provide drone model name: " << endl;
        cin >> modelName;
        cout << "What's the battery life in hours for this drone?: " << endl;
        cin >> batteryLife;

        dronePtrs[i] = new Drone(modelName, batteryLife);
    }

    // Print the drone model names and their corresponding battery lives (in hours)
    cout << "\nDrone model name and battery life" << endl;
    for (int i = 0; i < NUM_OF_DRONES; i++) {
        cout << "Drone name: " << dronePtrs[i] -> getModelName() << endl;
        cout << "Battery life (hours): " << dronePtrs[i] -> getBatteryLife() << endl;
        cout << endl;
    }

    for (int i = 0; i < NUM_OF_DRONES; i++) {
        delete dronePtrs[i];
        dronePtrs[i] = nullptr;
    }

    return 0;
}




















