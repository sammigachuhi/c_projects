#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <array>
#include <string>
using namespace std;

class Student {
    public:
        Student (string firstName, string lastName, double gpa);

        // getters
        string getFullName() const;
        double getGPA() const;

    private:
        string firstName;
        string lastName;
        double gpa;
};

#endif





























