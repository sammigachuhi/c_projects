#include <iostream>
#include <string>
using namespace std;

int main() {

    int ARR_SIZE;

    cout << "\nEntery array size here: " << endl;
    cin >> ARR_SIZE;

    int* myArray = new int[ARR_SIZE];

    cout << "====Printing array details============" << endl;
    for (int i = 0; i < ARR_SIZE; i++) {
        myArray[i] = i * 2;
    }

    for (int i = 0; i < ARR_SIZE; i++) {
        cout << myArray[i] << endl;
    }

    delete[] myArray;
    myArray = nullptr;

    return 0;
}





















