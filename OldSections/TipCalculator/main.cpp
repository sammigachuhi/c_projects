#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    float totalBill;

    float tipPercent;

    float tipAmount;

    cout << fixed << setprecision(2);

    cout << "Kindly enter the bill amount: $ " << endl;
    cin >> totalBill;

    cout << "Kindly enter the tip percentage you want to leave: " << endl;
    cin >> tipPercent;

    tipAmount = totalBill * (tipPercent / 100);

    cout << "You should leave tip amount: " << tipAmount << " to the waiter." << endl;


    return 0;
}