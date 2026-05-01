#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> someNames;

    someNames.push_back("Alexander");
    someNames.push_back("Marcus");
    someNames.push_back("Aurelius");
    someNames.push_back("Gachuhi");
    someNames.push_back("Njeri");

    cout << "Original five names: " << endl;
    for (auto i : someNames) {
        cout << "Name: " << i << endl;
    }

    // Insert John Baugh as third element (index 2)
    someNames.insert(someNames.begin() + 2, "John Baugh");

    // // Sanity check. Check whether john is the third element
    // cout << "\nSanity check" << endl;
    // for (auto i : someNames) {
    //     cout << "Name: " << i << endl;
    // }

    // Remove the last element 
    cout << "\nRemove the last element" << endl;
    cout << "\nPrint remaining elements" << endl;
    someNames.pop_back();

    for (auto i : someNames) {
        cout << "Name: " << i << endl;
    }

    return 0;
}



















