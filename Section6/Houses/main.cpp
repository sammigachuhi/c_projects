#include <iostream>
#include <string>
#include "House.h"
using namespace std;


// includes header with double quotes
// uses scope resolution operator to define class functions outside the class. 
//-------------- main function -----------------------------
int main() {

    // House myHouse;
    House theirHouse(2, 10, "green");
    theirHouse.print();
    // House yourHouse;
    // House myHouse;

    // cout << "Before calling any setters..." << endl;
    // myHouse.print();

    // myHouse.setNumStories(2);
    // myHouse.setNumWindows(6);
    // myHouse.setColor("red");

    // cout << "\nAfter calling setters..." << endl;
    // myHouse.print();


    // myHouse.setNumStories(2);
    // myHouse.setNumWindows(6);
    // myHouse.setColor("red");

    // yourHouse.setNumStories(3);
    // yourHouse.setNumWindows(10);
    // yourHouse.setColor("blue");

    // myHouse.print();
    // yourHouse.print();

    return 0;
}




















