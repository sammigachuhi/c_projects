
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<string> names = { "John", "Sally", "Bob", "Sam", "Ali", "Karen" };

int main() {

    queue<string> q;

    // Put names in the `names` vector into the queue
    for (auto i : names) {
        q.push(i);
    }

    // Access the front element in the queue
    cout << "Front element: " << q.front() << endl;

    // Remove all elements in the queue;
    cout << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    // Check if queue is empty
    cout << endl;
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}








