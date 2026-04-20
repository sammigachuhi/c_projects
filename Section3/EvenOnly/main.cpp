#include <iostream>
using namespace std;

int main() {

    int count = 0;
    int i;

    for (i = count; i < 10; i++) {
        if (i % 2 == 0) {
            cout << "This is no: " << i << endl;
        } else
            continue;
       
    }


    // while (count < 10) {
    //     if (count % 2 !=0) {
    //         count++;
    //         continue;
    //     }

    //     cout << count << endl;
    //     count++;

    // }


    return 0;
}



