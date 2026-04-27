#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[4] = {"Bob", "Sally", "John", "Ed"}; 

    // for (int i = 0; i < 4; i++) {
    //     cout << names[i] << endl;
    // };

    // for(string z: names) {
    //     cout << z << endl;
    // }

    for(auto x: names) {
        cout << x << endl;
    } 

    return 0;
}










