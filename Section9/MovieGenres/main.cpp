#include "Movies.h"
#include <iostream>
#include <string>
#include <array>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

string INPUT_FILE = "moviegenres.txt";
vector<string> movieVector;
string movieName;
vector<string>::iterator ip;
vector<string> uniqueMovieGenres;

int main() {
    // Read the contents of the file
    ifstream inputFile(INPUT_FILE);

    if (!inputFile) {
        cerr << "File doesn't exist." << endl;
        return 1;
    }

    while (inputFile >> movieName) {
        movieVector.push_back(movieName);
    }

    vector<string> movieVectorCopy = movieVector; // copy the original vecto

    cout << "---------Items in movieVector----------------" << endl;
    for (auto i : movieVector) {
        cout << i << endl;
    }

    cout << endl;
    sort(movieVector.begin(), movieVector.end());

    int vectorSize = movieVector.size();

    ip = unique(movieVector.begin(), movieVector.begin() + vectorSize);

    // Resizing the vector 
    movieVector.resize(distance(movieVector.begin(), ip));

    // cout << "test items------------" << endl;
    for (ip = movieVector.begin(); ip != movieVector.end(); ip++) {
        uniqueMovieGenres.push_back(*ip);
        // cout << *ip << endl;
    }

    cout << "---------------List of all movie genres---------------" << endl;
    for (auto i : uniqueMovieGenres) {
        cout << i << endl;
    }

    // Count the number of times each value appears in the moviegenre vector
    cout << "------ Count of movie genres -------------" << endl;
    for (auto i : uniqueMovieGenres) {
        cout << "Genre: " << i << ": " << count(movieVectorCopy.begin(), movieVectorCopy.end(), i) << endl;
    }

    return 0;

}






















