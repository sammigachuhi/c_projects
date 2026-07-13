#include <iostream>
#include <string>

using namespace std;

// double getBigger(double a, double b);
// int getBigger(int a, int b);
// string getBigger(string a, string b);

template <class T>
T getBigger(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
T getSmaller(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    double biggerDub = getBigger(3.14, 5.55);
    int biggerInt = getBigger(11, 9);
    string biggerStr = getBigger("John", "Alice");

    double smallerDub = getSmaller(3.14, 5.55);
    int smallerInt = getSmaller(11, 9);
    string smallerStr = getSmaller("John", "Alice");

    cout << "Bigger items: " << endl;
    cout << "\t" << biggerDub << "\n\t" << biggerInt << "\n\t" << biggerStr << endl;

    cout << "Smaller items: " << endl;
    cout << "\t" << smallerDub << "\n\t" << smallerInt << "\n\t" << smallerStr << endl;

    return 0;
}

// double getBigger(double a, double b) {
//     return (a > b) ? a : b;
// };

// int getBigger(int a, int b) {
//     return (a > b) ? a : b;
// };
// string getBigger(string a, string b) {
//     return (a > b) ? a : b;
// };



