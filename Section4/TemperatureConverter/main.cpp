#include <iostream>
#include <array>
using namespace std;

int main() {
    const int SIZE = 7;
    double tempArray[SIZE];
    double tempCelsius[SIZE];
    // array<double, SIZE> tempArray;
    // array<double, SIZE> tempCelsius;
    double tempValue;

    // Create a for loop that ranges for 7 days and asks for input in Farenheight for each day
    for (int i = 0; i < SIZE; i++) {
        int day = i + 1;

        cout << "Day: " << day << " in (F)" << endl;
        cin >> tempArray[i];
    }

    // Now print the entire array
    cout << "\nTemperature (F) for last 7 days: " << endl;

    for (int i = 0; i < SIZE; i++) {

        int day = i + 1;

        cout << "Day " << day << ", Temperature in (F): " << tempArray[i] << endl;

    }

    cout << endl;

    // Create a loop that converts the Farenheight to Celsius
    for (int i = 0; i < SIZE; i++) {
        // Convert each value at tempArray[index] to Celsius using this formula: `C = (F - 32) * 5 / 9 
        tempCelsius[i] = (tempArray[i] - 32) * 5 / 9; 

        int day = i + 1;

        cout << "Day " << day << endl;
        cout << "Temperature in (F): " << tempArray[i] << " | Temperature in (C): " << tempCelsius[i] << endl;
    }

    // for (double i : tempArray) {
    //     double tempCelsius = (i - 32) * 5 / 9;
    //     cout << "F: " << i << " -> C: " << tempCelsius << endl;
    // }


    return 0;
}













