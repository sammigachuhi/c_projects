#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <random>
using namespace std;

string INPUT_FILE = "input.txt";
string OUTPUT_FILE = "output.txt";

int main() {

    ofstream file(INPUT_FILE);

    if (!file) {
        cerr << "The file " << INPUT_FILE << " is non-existent." << endl;
        return 1;
    }

    // Generate random numbers between 1 and 100
    int min = 1;
    int max = 10;

    // Initialize a random number generator
    int seed = 42; //ensures the same sequence is repeated
    random_device rd;
    mt19937 gen(seed);
    uniform_int_distribution<> distrib(min, max);

    // Generate a random number in the range (min, max)
    // int randomValue = distrib(gen);
    for (int i = 0; i < 10; i++) {
        // cout << distrib(gen) << endl;
        file << distrib(gen) << endl;
    }

    // Read the contents of the input file
    ifstream inputFile(INPUT_FILE);
    int num;

    // the output file
    ofstream outFile(OUTPUT_FILE);

    if (!inputFile || !outFile) {
        cerr << "One of the files is missing." << endl;
    } else {
        while (inputFile >> num) {
        cout << num << endl;
        outFile << "Original no." << num << "\tNum * 2: " << num * 2 << endl;
    }
}

    inputFile.close();
    outFile.close();

    return 0;
}




