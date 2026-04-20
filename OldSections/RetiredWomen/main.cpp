#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string gender;

    cout << "How old are you?: " << endl;
    cin >> age;

    cout << "What is your gender (M or F)? " << endl;
    cin >> gender;

    if (age >= 60 && (gender == "F" || gender == "f")) {
        cout << "You are eligible" << endl;
    } 
    else if (age < 60 && (gender == "F" || gender == "f")) {
        cout << "You are not eligible" << endl;
    } 
    else {
        cout << "You are not eligible" << endl;
    }


    return 0;
}