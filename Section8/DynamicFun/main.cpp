#include <iostream>
using namespace std;


int main() {
    int* myIntPtr = new int;

    *myIntPtr = 123;

    ////////////////
    bool* myName = new bool;

    *myName = true;

    cout << *myIntPtr << endl;

    delete myIntPtr;
    myIntPtr = nullptr;

    //////////////////////////////////////////
    cout << endl;
    cout << myName << endl;
    cout << *myName << endl;
    cout << boolalpha << *myName << endl;

    delete myName;
    myName = nullptr;

    cout << *myName << endl;
    cout << boolalpha << *myName << endl;

    return 0;
}













