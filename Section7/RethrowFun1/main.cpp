#include <iostream>
#include <stdexcept>
using namespace std; 

void processPositive(int num);
void doSomething(int num);
void lessThan100(int num);

int main() {

    int input;

    try {
        cout << "Enter a number to process!" << endl;
        cin >> input;

        doSomething(input);

        cout << "Yay! main was able to completely process the num!" << endl;

    } catch (const invalid_argument& err) {
        cout << "main says there is an error!" << endl;
        cout << err.what() << endl;
    } catch (const out_of_range& err) {
        cout << "main shows an out_of_range error!" << endl;
        cout << err.what() << endl;
    }

    return 0;
}

void processPositive(int num) {
    cout << "Welcome to the postive integer processor!" << endl;

    if (num >= 0) {
        cout << "Good job! You passed in a positive num to processPositive" << endl;
    } else {
        throw invalid_argument("Negative number passed in!");
    }
}

void lessThan100(int num) {
    cout << "\nWelcome to the check that scans if your number is less than 100!" << endl;
    if (num < 100) {
        cout << endl;
    } else {
        throw out_of_range("Your number is above 100!");
    }
}

void doSomething(int num) {
    try {
        processPositive(num);
        cout << "Yay! doSomething could process the num!" << endl;

        // check if num is less than 100
        lessThan100(num);
        // cout << "Yay! lessThan100 verified that your number was less than 100!" << endl;
    } catch (const invalid_argument& err) {
        cout << "doSomething says there's a problem there." << endl;
        throw;
    } catch (const out_of_range& err) {
        cout << "lessThan100 returns an error." << endl;
        throw;
    }
}










