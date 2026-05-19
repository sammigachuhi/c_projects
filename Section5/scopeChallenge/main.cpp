#include <iostream>
using namespace std;

int counter = 0;

int START = 0;
int END = 100;

void modifyGlobal(int aValue);

int main() {

    cout << "The original value before looping: " << counter << endl;

    for (int i = START; i < END; i++) {
        modifyGlobal(31);
    }

    cout << "The value after looping: " << counter << endl;

    return 0;
}

void modifyGlobal(int aValue) {
    // cout << "You have given me the params: " << aValue << endl;
    counter++;
    cout << "Value is: " << counter << endl;
}





















