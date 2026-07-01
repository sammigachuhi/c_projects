#include "Student.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;


Student::Student (string firstName, string lastName, double gpa) {
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> gpa = gpa;
}

string Student::getFullName() const {
    return firstName + " " + lastName;
}

double Student::getGPA() const {
    return gpa;
}








