#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    string secretAlias;
    int age;
    int agentLevel;
    string favouriteGadget;

    cout << "What is your full name? " << endl;
    getline(cin, fullName);

    cout << "What is your secret alias? " << endl;
    getline(cin, secretAlias);

    cout << "How old are you? " << endl;
    cin >> age;

    cout << "What is your agent level? " << endl;
    cin >> agentLevel;

    cin.ignore();

    cout << "What is your favourite gadget? " << endl;
    getline(cin, favouriteGadget);

    cout << "\n----Secret Agent ID---" << endl;

    cout << "Full name: " << fullName << endl;

    cout << "Secret alias: " << secretAlias << endl;

    cout << "Current age: " << age << endl;

    cout << "Agent level: " << agentLevel << endl;

    cout << "Favourite gadget: " << favouriteGadget << endl;

    return 0;
}

