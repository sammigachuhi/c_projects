#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {

    vector<string> myList = {};

    string input;

    cout << "What items do you want to buy? " << endl;

    // Create prompts
    while (input != "done") {
        getline(cin, input);
        myList.push_back(input);
    }

    cout << endl;

    cout << "=====Print my shopping list========" << endl; 

    for (auto i : myList) {
        // If "done" skip, else print out the list items
        if (i == "done") {
            continue;
        } else {
            cout << "- " << i << endl;
        }
    }

    cout << "=======End of shopping list===========" << endl;

    return 0;
}

















