#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

vector<string> myList = {"Amarok", "travelling", "bun", "Gachuhi", "house", "plane"};
map<int, string> myMap;
unordered_map<int, string> myUnorderedMap;
string searchThis = "Addis Abeba";

int main() {

    myList.push_back("Marsabit");

    cout << "-------- Using push_back() -----------" << endl;
    for (auto i : myList) {
        cout << i << ", ";
    }
    
    cout << endl;

    cout << "-------- Using emblace_back() -----------" << endl;
    myList.emplace_back("Addis Abeba");
    for (auto i : myList) {
        cout << i << ", ";
    }
    
    cout << endl;

    // Remove items with list length <= 3
    for (auto i : myList) {
        if (i.size() <= 3) {
            auto removeThis = remove(myList.begin(), myList.end(), i);
            myList.erase(removeThis, myList.end());
        }
    }

    cout << "--------- After removing this with remove - erase ------------ " << endl;
    for (auto i : myList) {
        cout << i << ", ";
    }

    cout << endl;

    cout << "-------- Using map<string, int> -------- " << endl;
    for (auto i : myList) {
        myMap.insert({i.size(), i});
    }

    for (auto i : myMap) {
        cout << i.first << ": " << i.second << endl;
    }

    cout << "-------- Using unordered_map<string, int> -------- " << endl;
    for (auto i : myList) {
        myUnorderedMap.insert({i.size(), i});
    }

    for (auto i : myUnorderedMap) {
        cout << i.first << ": " << i.second << endl;
    }

    cout << endl;

    cout << "----- Search for a word --------- " << endl;

    auto it = find(myList.begin(), myList.end(), searchThis);

    cout << "The word: `" << searchThis << "` is found at index: " << distance(myList.begin(), it) << endl;

    return 0;
}













