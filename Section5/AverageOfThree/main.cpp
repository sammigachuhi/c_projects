#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

double a = 5.2;
double b = 11.9;
double c = 33;

double average(double a, double b, double c);

int main() {

    double averageResult = average(a, b, c);

    cout << "Average is: " << averageResult << endl;

    return 0;
}

double average(double a, double b, double c) {
    // return (a + b + c) / 3;
    double arr[] = {a, b, c};
    int n = sizeof(arr) / sizeof(arr[0]); // mathy way in c++ to get size of array

    // double sumResult = accumulate(arr, arr + n, 0);

    // double avgResult = sumResult / n;

    return (a + b + c) / n;
}















