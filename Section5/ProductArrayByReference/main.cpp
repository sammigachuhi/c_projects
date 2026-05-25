#include <iostream>
#include <array>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;

array<int, 6> firstArray{1, 2, 3, 4, 5, 6};
array<int, 6> someArray{1, 2, 3, 4, 5, 7};

int productArray(array<int, 6> myArray);
void productArray(array<int, 6> myArray, int& result);
// int arrayProduct = 2;

int main() {
    
    // int arrayProduct;
    int result = productArray(firstArray);

    cout << "Before pass by reference: " << result << endl;
    
    productArray(someArray, result);

    cout << "Total Product (after pass by reference): " << result << endl;

    return 0;
}

int productArray(array<int, 6> myArray) {

    int product = 1;

    for (int num : myArray) {
        product *= num;;
    }

    return product;
    
}

void productArray(array<int, 6> myArray, int& result) {

    result = 1;


    for (int num : myArray) {
        result *= num;
    }

    // return;

    // return;

    // int sizeOfArray = myArray.size();

    // int product = 1;
    // int totalProduct;
    // int finalTotal = 0;
    
    

    // for (int i = myArray[0]; i < sizeOfArray+1; i++) {
        
    //     totalProduct = product * i;
    //     finalTotal += totalProduct;
        
    // }
    // return finalTotal;
    
    // int res = accumulate(myArray, myArray + sizeOfArray, 1, multiplies<int>());
    
}



