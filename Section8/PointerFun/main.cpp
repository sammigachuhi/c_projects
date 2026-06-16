#include <iostream>
using namespace std;

int main() {

    int myLovelyInt = 150;
    int* somePtr = &myLovelyInt;

    double myDouble = 3.14;
    double* doublePtr = &myDouble;

    cout << "myLovelyInt is originaly: " << myLovelyInt << endl;
    cout << "pointer holds value: " << somePtr << endl;
    cout << "pointer dereferenced: " << *somePtr << endl;

    *somePtr = 200;

    cout << "myLovelyInt is now: " << myLovelyInt << endl;

    cout << endl;

    cout << "The address of `doublePtr` is: " << doublePtr << endl;
    cout << "The data pointed by `doublePtr` is: " << *doublePtr << endl;

    return 0;
}
















