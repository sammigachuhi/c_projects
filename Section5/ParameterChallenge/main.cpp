
#include <iostream>
using namespace std;

void threeTimesN(int input, int& output);

int main () {

    int myNumber = 4;
    int someNum = 0;

    threeTimesN(myNumber, someNum);

    cout << "After threeTimesN, someNum is: " << someNum << endl;

    return 0;
}

void threeTimesN(int input, int& output) {
    output = input * 3;

    cout << "Result is: " << output << endl;

}



























