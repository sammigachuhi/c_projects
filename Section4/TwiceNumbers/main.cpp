#include <iostream>
#include <array>
using namespace std;

int main() {

    array < int, 10 > myIntArray {};

    for (int i = 0; i < myIntArray.size(); i++) {
        // if (i % 2 == 0) {
        //     cout << "Number: " << i << endl;
        // }
        myIntArray[i] = i * 2;
        cout << "No." << i << " -> " << myIntArray[i] << endl;
    }

    // int i = 0;
    // for (auto i : myIntArray) {
    //     if (i % 2 == 0) {
    //         cout << i << endl;
    //     }
    // }

    // for (int i = 0; i < myIntArray.size(); i++) {
    //     myIntArray[i] = i * 2;
    // };

    // for (int element: myIntArray) {
    //     cout << element << endl;
    // }

    return 0;
}