#include <iostream>
#include <fstream>
#include <vector>
#include <array>
using namespace std; 

vector<int> fileNum;

int main() {

    int inputNum;
    int sum = 0;
    ifstream infile("input.txt");

    if(!infile){
        cerr << "Could not open file." << endl;
        return 1;
    }

    while(infile >> inputNum) {
        fileNum.push_back(inputNum);
        sum += inputNum;
    }

    for (int num : fileNum) {
        cout << num << endl;
    }
    // for (int i = 0; i < fileNum.size(); i++) {
    //     infile >> fileNum[i];
    //     for (int i = 0; i < fileNum.size(); i++) {
    //         cout << fileNum[i] << endl;
    //     }

    //     sum += fileNum[i];

    // }
  
    cout << "Sum of numbers is: " << sum << endl;

    infile.close();

    return 0;
}




















