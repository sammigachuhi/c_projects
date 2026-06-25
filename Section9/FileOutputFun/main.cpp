#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int MY_VALUE;

void printFormatted (int someNum);

int main() {

    cout << "Enter the limit of your range: " << endl;
    cin >> MY_VALUE;

    printFormatted(MY_VALUE);

    // cout << "Writing to file..." << endl;

    // ofstream outfile("output.txt");

    // if (!outfile) {
    //     cerr << "Error: Could not open file for writing." << endl;
    //     return 1;
    // }

    // cout << fixed << showpoint;
    // outfile << fixed << showpoint;

    // for (int i = 1; i <= 10; i++) {
    //     double value1 = i * 5.7575;
    //     double value2 = i * 3.14159;

    //     cout << setw(12) << setprecision(2) << value1
    //         << setw(12) << setprecision(3) << value2 << endl;
 
    //     outfile << setw(12) << setprecision(2) << value1 
    //         << setw(12) << setprecision(3) << value2 << endl;
        

        
    // }

    // outfile << "Hello world!" << endl;

    // outfile.close();
    // cout << "Done" << endl;

    return 0;

}


void printFormatted(int someNum) {

    cout << "Writing to file..." << endl;

    ofstream outfile("output.txt");

    if (!outfile) {
        cerr << "Error: Could not open file for writing." << endl;
        // return 1;
    }

    cout << fixed << showpoint;
    outfile << fixed << showpoint;

    for (int i = 1; i <= MY_VALUE; i++) {
        double value1 = i * 5.7575;
        double value2 = i * 3.14159;

        cout << setw(12) << setprecision(2) << value1
            << setw(12) << setprecision(3) << value2 << endl;
 
        outfile << setw(12) << setprecision(2) << value1 
            << setw(12) << setprecision(3) << value2 << endl;
        
    }

    outfile.close();
    cout << "Done" << endl;

}






















