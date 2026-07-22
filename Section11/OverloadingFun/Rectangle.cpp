#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    length = 1;
    width = 1;
};

Rectangle::Rectangle(double length, double width) {
    this -> length = length;
    this -> width = width;
};

double Rectangle::getLength() const {
    return length;
};

double Rectangle::getWidth() const {
    return width;
};

void Rectangle::setLength(double length) {
    this -> length = length;
};

void Rectangle::setWidth(double width) {
    this -> width = width;
};

double Rectangle::area() const {
    return length * width;
};

double Rectangle::perimeter() const {
    return 2 * (length + width);
};


 // Overloading operators
bool Rectangle::operator==(const Rectangle& other) const {
    return length == other.length && width == other.width;
};

bool Rectangle::operator!=(const Rectangle& other) const {
    return !(*this == other);
};

Rectangle Rectangle::operator+(const Rectangle& other) const {
    return Rectangle(length + other.length, width + other.width);
};

bool Rectangle::operator<(const Rectangle& other) const {
    return this -> area() < other.area();
}

void Rectangle::operator=(const Rectangle& other) {
    length = other.length;
    width = other.width;
};








