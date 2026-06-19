#include <iostream>
using namespace std; 

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(double doubleValue);


int main() {

    noConst();
    cout << endl;

    cp2ncd();
    cout << endl;
    
    ncp2cd();
    cout << endl;

    cp2cd();
    cout << endl;

    noChange(31.5);


    return 0;
}

// 1. no-const pointer to non-const data
void noConst() {
    cout << "In noConst" << endl;
    int* intPtr = new int(50);
    cout << "\toriginal value: " << *intPtr << endl;

    *intPtr = 100;
    cout << "\tChanged data: " << *intPtr << endl;

    delete intPtr;

    intPtr = new int(125);
    cout << "\tnew int entirely: " << *intPtr << endl;

    delete intPtr;
};

//2. const pointer to non-const data
void cp2ncd() {
    cout << "In cp2ncd" << endl;

    int* const intPtr = new int(100);

    cout << "\toriginal value: " << *intPtr << endl;

    *intPtr = 250;
    cout << "\tmodified value: " << *intPtr << endl;

    // intPtr << new int(222);
    delete intPtr;

};

// 3. non-const pointer to constant data
void ncp2cd() {
    cout << "In np2cd" << endl;

    const int* intPtr = new int(500);
    cout << "\toriginal value: " << *intPtr << endl;

    // intPtr = 600;
    delete intPtr;

    intPtr = new int(1000);
    cout << "\tNew value: " << *intPtr << endl;

    delete intPtr;
};

// 4. const pointer to const data
void cp2cd() {
    cout << "In cp2cd" << endl;
    
    const int* const intPtr = new int(5000);

    cout << "\toriginal value: " << *intPtr << endl;

    // *intPtr = 6000; can't do this the data is constant
    // intPtr = new int(6000); // can't do this, the pointer is constant

    delete intPtr;
};


void noChange(double doubleValue) {
    cout << "No change: " << endl;

    const double* const doublePtr = new double(doubleValue);

    cout << "Const pointer to const double: " << *doublePtr << endl;

    delete doublePtr;

}













