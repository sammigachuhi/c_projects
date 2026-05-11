
#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {

    vector<string> movieTitles = {};
    vector<int> movieRatings = {};
    string inputTitle;
    int inputRating;

    // Pairing 
    size_t size = min(movieTitles.size(), movieRatings.size());
    

    // Create for loop that asks for the movie title and movie rating 5 times 
    for (int i = 0; i < 5; i++) {
        // The user will see this
        cout << "Which movie have you watched?" << endl;
        getline(cin, inputTitle);
        movieTitles.push_back(inputTitle);

        cout << "How would you rate the movie?" << endl;
        cin >> inputRating;
        movieRatings.push_back(inputRating);

        cin.ignore(1000, '\n');

        cout << endl;
    }

    // Print this for the user to know they've reached the end of the loop
    cout << "You have given us 5 movie titles and their ratings" << endl;

    // for (auto i : movieTitles) {
    //     for (auto j : movieRatings) {
    //         cout << "You rated " << i << " at " << j << "/10." << endl;
    //         cout << endl;
    //     }
    // }

    for (int i = 0; i < movieTitles.size(); i++) {
        cout << "You rated " << movieTitles[i] << " at " << movieRatings[i] << "/10." << endl;
        cout << endl;
    }


    return 0;
}
















