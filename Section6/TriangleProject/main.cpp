#include "Triangle.h"

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    Triangle myTriangle(14.0, 13.0, 15.0);
    Triangle myDefault;

    Triangle yourTriangle;
    yourTriangle.setSideA(5.0);
    yourTriangle.setSideB(6.0);
    yourTriangle.setSideC(5.0);


    cout << "Triangle details: " << endl;
    cout << "Side A: " << myTriangle.getSideA() << endl;
    cout << "Side B: " << myTriangle.getSideB() << endl;
    cout << "Side C: " << myTriangle.getSideC() << endl;
    cout << "Is triangle valid: " << myTriangle.isValid() << endl;
    cout << endl;

    cout << "Perimeter: " << myTriangle.perimeter() << endl;
    cout << "Area: " << myTriangle.area()  << endl;

    cout << endl;
    cout << "Is triangle valid: " << myDefault.isValid() << endl;
    cout << "Perimeter: " << myDefault.perimeter() << endl;
    cout << "Area: " << myDefault.area()  << endl;

    cout << endl;

    cout << "Side A: " << yourTriangle.getSideA() << endl;
    cout << "Side B: " << yourTriangle.getSideB() << endl;
    cout << "Side C: " << yourTriangle.getSideC() << endl;
    cout << "Is triangle valid: " << yourTriangle.isValid() << endl;
    cout << endl;

    cout << "Perimeter: " << yourTriangle.perimeter() << endl;
    cout << "Area: " << yourTriangle.area()  << endl;


    return 0;
}













