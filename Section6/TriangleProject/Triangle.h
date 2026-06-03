#ifndef TRIANGLE_H
#define TRIANGLE_H 

#include <iostream>
#include <cmath>
using namespace std;

class Triangle {

    public:
        Triangle();
        Triangle (double a, double b, double c);

        // setters 
        void setSideA(double a);
        void setSideB(double b);
        void setSideC(double c);

        bool isValid();
        double perimeter();
        double area();

        // getters;
        double getSideA() const;
        double getSideB() const;
        double getSideC() const;

    private:
        double sideA;
        double sideB;
        double sideC;
};

#endif 
















