#include <iostream>
using namespace std;

int factorial(int num);

int NUM = 6;

int main() {

    int factorialResult = factorial(NUM);

    cout << "Factorial result: " << factorialResult << endl;

    return 0;
}


int factorial(int num) {
    if (num > 1) {
        return num * factorial(num - 1);
    } else if (num == 1) {
        return 1;
    }
    return num;
}















