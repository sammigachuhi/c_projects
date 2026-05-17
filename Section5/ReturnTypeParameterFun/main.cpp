#include <iostream>
#include <cmath>
using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
int square(int a);

int main() {

    int num1 = 120;
    int num2 = 580;

    printHello();
    printNumber(100);

    int someData = giveMe10();
    cout << someData << endl;

    int totalValue = addThese(num1, num2);
    cout << totalValue << endl;

    printNumber(addThese(num1, 50));

    cout << "The square of num1 is: " << square(num1) << endl;

    return 0;
}


void printHello() {

    cout << "Hello there!" << endl;
}

void printNumber(int a) {
    cout << "The number is " << a << endl;
}

int giveMe10() {
    return 10;
}

int addThese(int num1, int num2) {
    return num1 + num2;
}

int square(int a) {
    return pow(a, 2);
}








