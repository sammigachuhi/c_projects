#include "Student.h"
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <fstream>
#include <math.h>
#include <iomanip>
using namespace std;


int main() {
    ifstream infile("students.txt");

    if(!infile) {
        cerr << "Failed to open students.txt." << endl;
        return 1;
    }

    vector<Student*> roster;
    string firstName;
    string lastName;
    double gpa;

    while (infile >> firstName >> lastName >> gpa) {
        if(gpa >= 80.0 && gpa <= 90.1) {
            Student* s = new Student(firstName, lastName, gpa);
            roster.push_back(s);
        }
    }

    infile.close();

    cout << fixed << showpoint << setprecision(2);
    cout << "Student Roster: " << endl;
    cout << "----------------------------------" << endl;

    double sum = 0;
    int honors = 0;

    for (Student* s : roster) {
        cout << setw(20) << left << s -> getFullName()
            << "GPA: " << s -> getGPA() << endl;

        sum += s -> getGPA();

        if (s -> getGPA() >= 80.5) {
            honors++;
        }
    }

    double avgGPA = (roster.size() > 0) ? sum / roster.size() : 0.0;
    
    cout << "\nClass Average GPA: " << avgGPA << endl;
    cout << "Honor Roll Students: " << honors << endl;

    for (Student* s : roster) {
        delete s;
    }

    roster.clear();

    return 0;
}














