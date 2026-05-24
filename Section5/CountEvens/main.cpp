#include <iostream>
#include <vector>
using namespace std;

int myArray[] = {2, 7, 10, 5, 6, 1, 18, 22, 19, 3, 3};
int n = sizeof(myArray) / sizeof(myArray[0]); // explanation: https://www.w3schools.com/cpp/cpp_arrays_size.asp

int countEvens(int arr[], int size);

int main() {

    countEvens(myArray, n);

    return 0;
}


int countEvens(int arr[], int size) {

    vector<int> results;

    // Loop through the array 
    for (int i = arr[0]; i < size; i++) {
        if (i % 2 == 0) {
            results.push_back(i);
        } else {
            continue;
        }
    }

    // Loop through the vector to print out its elements 
    cout << "Even numbers are: " << endl;
    for (auto i : results) { 
        cout << i << endl;
    }

    // Print the number of even numbers in the vector
    int totalNumbers = results.size();
    cout << "The total number of even numbers is: " << totalNumbers << endl;

    return 0;
}



























