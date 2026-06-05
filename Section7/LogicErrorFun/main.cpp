#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {

    vector<int> myNums;

    // this will through a length error 
    // myNums.resize(myNums.max_size() + 1);

    // cout << "Yay, it's a big vector!" << endl;

    try {
        myNums.resize(myNums.max_size() + 1);
        
    } catch (const length_error& object) {
        cout << "Exception error: ===> " << object.what() << endl;
    } 
        
    cerr << "Yay, it's a big vector!" << endl;
    
    return 0;
}











