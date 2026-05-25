#include <iostream>
#include <array>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;

// int someArray[] = {1, 2, 3, 4, 5, 6};
array<int, 6> someArray{1, 2, 3, 4, 5, 6};

int productArray(array<int, 6> myArray);

int main() {

    int result = productArray(someArray);

    cout << "Total Product: " << result << endl;

    return 0;
}

int productArray(array<int, 6> myArray) {

    int product = 1;

    for (int num : myArray) {
        product *= num;;
    }

    return product;

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
