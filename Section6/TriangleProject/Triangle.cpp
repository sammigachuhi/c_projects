#include "Triangle.h"

#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle() {
    this -> sideA = 5;
    this -> sideB = 5;
    this -> sideC = 5;
}

Triangle::Triangle(double sideA, double sideB, double sideC) {
    this -> sideA = sideA;
    this -> sideB = sideB;
    this -> sideC = sideC;
}

void Triangle::setSideA(double sideA) {
    this -> sideA = sideA;
}

void Triangle::setSideB(double sideB) {
    this -> sideB = sideB;
}

void Triangle::setSideC(double c) {
    this -> sideC = sideC;
}

double Triangle::getSideA() const {
    return sideA;
}

double Triangle::getSideB() const {
    return sideB;
}

double Triangle::getSideC() const {
    return sideC;
}

bool Triangle::isValid() {
    if (((sideA != sideB) || (sideA != sideC)) && ((sideB != sideB) || (sideB != sideC))) {
        return true;
    } else {
        return false;
    }
}

double Triangle::perimeter() {
    double s = (sideA + sideB + sideC);
    return s;
}

double Triangle::area() {
    double s = (sideA + sideB + sideC) / 2.0;
    double a1 = s*(s - sideA)*(s - sideB)*(s - sideC);
    double A = sqrt(a1);

    return A;
}




