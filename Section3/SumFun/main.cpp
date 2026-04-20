#include <iostream>
#include <string>
using namespace std;

// int main() {
//     // int count = 0;
//     // int input;

//     // // cout << "Give me a number: " << endl;
//     // // cin >> input;
//     // int count = 0;

//     // while (input >= 0) { 
//     //     // cout << "You entered: " << input << endl;
//     //     // cout << "Enter another number or a negative to quit. " << endl;
//     //     // cin >> input;
//     //     // int total = input++;
        
//     //     // cout << "Total is: " << total << endl;
//     //     // count++;
//     //     // cout << "Count is: " << count << endl;
//     //     // cout << "Enter a number: " << endl;
//     //     // cin >> input;
//     //     // int total = count + input;
//     //     // cout << "Total is: " << total << endl;        

//     // }


//     return 0;
// }

int main() {
    int sum = 0;
    int input;

    cout << "Enter a non-negative integer (or a negative number to quit): " << endl;
    cin >> input;

    while (input>=0) {
        sum += input;
        cout << "Enter another (or negative to quit): " << endl;
        cin >> input;
    }

    cout << "The sum of all entered values is: " << sum << endl;

    return 0;
}














