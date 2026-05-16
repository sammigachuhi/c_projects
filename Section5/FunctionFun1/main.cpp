#include <iostream>

using namespace std;

void printSomething();
void printMyName();

const string NAME = "Samuel Gachuhi";

int main() {

    printSomething(); // call or invocation of the function

    cout << endl;

    printMyName();

    return 0;
}

void printSomething() {
    cout << "Hey! Look, I'm here!" << endl;
}

void printMyName() {
    cout << "My name is: " << NAME << endl;
}

















