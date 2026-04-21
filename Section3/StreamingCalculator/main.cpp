#include <iostream>
#include <string>
using namespace std;


int main() {

    string letter;
    int x;

    cout << "Which streaming package did you use? (Choose A, B or C): " << endl; 
    cin >> letter;

    cout << "How many simultaneous devices do you use?: " << endl;
    cin >> x;

    if ((letter == "A" || letter == "a") && (x > 1)) {
        cout << "You are using the Basic Plan.\n"
        "Includes 1 device\n" 
        "Each additional device: $6."
        << endl;
        int sumA = 9 + (6 * (x - 1));
        cout << "Monthly total bill: $" << sumA << endl;
    } else if ((letter == "A" || letter == "a") && (x == 1)) {
        cout << "Monthly total bill: $" << 9 << endl;
    } else if ((letter == "A" || letter == "a") && (x < 1)) {
        cout << "Zero (0) and negative numbers not allowed!" << endl;
    };
        
    if ((letter == "B" || letter == "b") && (x > 3)) {
        cout << "You are using the Standard Plan.\n"
        "Includes 3 devices.\n"
        "Each additional device: $4"
        << endl;
        int sumB = 14 + (4 * (x - 3));
        cout << "Monthly total bill: $" << sumB << endl;
    } else if ((letter == "B" || letter == "b") && (x > 0 && x <= 3)) {
        cout << "Monthly total bill: $" << 14 << endl;
    } else if ((letter == "B" || letter == "b") && (x <= 0)) {
        cout << "Zero (0) and negative numbers not allowed!" << endl;
    };

    if ((letter == "C" || letter == "c") && (x > 5)) {
        cout << "You are using the Premium Plan.\n"
        "Includes 5 devices.\n"
        "Each additional device: $2" 
        << endl;
        int sumC = 20 + (2 * (x - 5));
        cout << "Monthly total bill: $" << sumC << endl;
    } else if ((letter == "C" || letter == "c") && (x > 0 && x <= 5)) {
        cout << "Monthly total bill: $" << 20 << endl;
    } else if ((letter == "C" || letter == "c") && (x <= 0)) {
        cout << "Zero (0) and negative numbers not allowed!" << endl;
    };

    if ((letter != "A" || letter != "B" || letter != "C" || letter != "a" || letter != "b" || letter != "c")) {
        cout << "Sorry, we don't have that kind of package." << endl;
    };


    return 0;
}




