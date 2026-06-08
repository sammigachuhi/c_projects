#include "Dog.h"
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        Dog dog1("German Shepherd");
        Dog dog2("Atlassian");
        // Dog dog3("Poodle");
        Dog dog4("Labrador");

        cout << dog1.getBreed() << endl;
        cout << dog2.getBreed() << endl;
        // cout << dog3.getBreed() << endl;
        cout << dog4.getBreed() << endl;

    } catch (const runtime_error& err) {
        cout << err.what() << endl;
    }

    return 0;
}





















