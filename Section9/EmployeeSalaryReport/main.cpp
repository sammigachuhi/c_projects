#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
using namespace std;

string INPUT_FILE = "salaries.txt";
int inputSalary;
int totalEmployees;
int totalPayroll;
double averageSalary;

vector<int> salaries;

int main() {

    ifstream file(INPUT_FILE);

    // Check if file is successfully opened
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    while (file >> inputSalary) {
        // cout << inputSalary << endl;
        salaries.push_back(inputSalary);
        totalPayroll += inputSalary;
    }

    // Now find the size of the salaries vector
    totalEmployees = salaries.size();

    // Average salary
    averageSalary = accumulate(salaries.begin(), salaries.end(), 0);
    averageSalary = averageSalary / salaries.size();
    
    cout << "Total No. of Employees: " << totalEmployees << endl;

    cout << "Total payroll cost: " << totalPayroll << endl;

    cout << "Average salary: " << averageSalary << endl;

    // Find number of employees earning above $100, 000
    int count = 0;
    for (auto i : salaries) {
        if (i > 100000) {
            count ++;
        }
    }

    cout << "Number of employees earning over $100, 000: " << count << endl;

    file.close(); // Always important to close a file!

    return 0;
}





















