#include <iostream>
#include <string>
using namespace std;

int main() {

    int startYear;
    int endYear;

    cout << "What is your starting year?: " << endl;
    cin >> startYear;

    cout << "What is your ending year?: " << endl;
    cin >> endYear;

    for (int i=startYear; i<=endYear; i++) {
        if (i % 4 == 0 || (i % 100 != 0 && i % 400 == 0)) {
            cout << "\nYear: " << i << endl;
            cout << "Is a leap year!" << endl;
        } else {
            continue;
        };
    }
    return 0;
}









