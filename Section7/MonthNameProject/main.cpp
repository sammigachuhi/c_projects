#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string getMonthName(int monthNum);

int main() {

    int aNumber;

    cout << "What number of month are you currently in?: " << endl;
    cin >> aNumber;

    string result = getMonthName(aNumber);

    cout << result << endl;

    return 0;
}

string getMonthName (int monthNum) {

    try {

        if (monthNum == 1) {
            return "January";
        } else if (monthNum == 2) {
            return "February";
        } else if (monthNum == 3) {
            return "March";
        } else if (monthNum == 4) {
            return "April";
        } else if (monthNum == 5) {
            return "May";
        } else if (monthNum == 6) {
            return "June";
        } else if (monthNum == 7) {
            return "July";
        } else if (monthNum == 8) {
            return "August";
        } else if (monthNum == 9) {
            return "September";
        } else if (monthNum == 10) {
            return "October";
        } else if (monthNum == 11) {
            return "November";
        } else if (monthNum == 12) {
            return "December";
        } else {
            throw out_of_range("Month must be between 1 and 12.");
        }

    } catch (const out_of_range& err) {
        cout << "Caught exception: " << err.what() << endl;
    }

    return 0;

    
}























