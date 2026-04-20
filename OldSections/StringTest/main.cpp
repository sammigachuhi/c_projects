#include <iostream>
#include <string>
using namespace std;

int main() {

    string fullName;
    string location;
    int initialScore;

    // cout << "Please enter your full name: " << endl;
    // cin.get();

    // getline(cin, fullName);

    // cout << "Hello, " << fullName << endl;

    // cout << "Please enter your location: " << endl;
    // cin.get();

    // getline(cin, location);

    // cout << "We heard you are from " << location << endl;

    // cout << "Please enter your initial score: " << endl;
    // cin >> initialScore;

    // cout << "Your original score is " << initialScore << " but with five points added " << endl;
    // cout << "your score is " << initialScore + 5 << endl;

    cout << "Please enter your full name: " << endl;
    getline(cin, fullName);

    cout << "Please eneter your location: " << endl;
    getline (cin, location);

    cout << "Please enter your initial score: " << endl;
    cin >> initialScore;

    cout << "Hello, " << fullName << endl;
    cout << "We heard you are from: " << location << endl;
    cout << "Your original score is " << initialScore 
        << ", but with five points added, your score is " 
        << (initialScore + 5) << endl;

    return 0;
}












