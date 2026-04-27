#include <iostream>
#include <string>
using namespace std;

int main() {

    const int ARRAY_SIZE = 10;
    int newArray[ARRAY_SIZE];

    newArray[0] = 1;
    newArray[1] = 2;
    newArray[2] = 3;
    newArray[3] = 4;
    newArray[4] = 5;
    newArray[5] = 6;
    newArray[6] = 7;
    newArray[7] = 8;
    newArray[8] = 9; 
    newArray[9] = 10;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Number: " << newArray[i] << endl;
    };
    // for (int i = 0; i < ARRAY_SIZE; i++) {
    //     newArray[i] = i + 1;
    //     cout << newArray[i] << endl;
    // }

    //////////////////////////
    cout << "\n==========Range based================" << endl;
    for (auto number: newArray) {
        cout << "Number: " << number << endl;
    };

    return 0;
}



