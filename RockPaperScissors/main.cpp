#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

int main() {

    string prompt;

    cout << "Choose a letter: (R) for Rock, (P) for Paper and (S) for Scissors\n"
        "Rock beats Scissors\n"
        "Paper beats Rock\n"
        "Choosing the same move is a tie"
    << endl;

    cout << "Make a move: " << endl;

    cin >> prompt; 

    if (prompt == "R" || prompt == "P" || prompt == "S") {
        cout << "You chose: " << prompt << endl;
    } else {
        cout << "We don't recognise that move." << endl;     
    };

    srand(time(0));
    string gemini;
    int randomNum = rand() % 11; // generate random number between 0 and 10

    cout << "\n=================" << endl;

    if (randomNum >= 0 && randomNum < 3) {
        gemini = "R";
        cout << "Random No. " << randomNum << endl;
        cout << "Gemini's move: " << gemini << endl;
    } else if (randomNum >= 3 && randomNum < 6) {
        gemini = "P";
        cout << "Random No. " << randomNum << endl;
        cout << "Gemini's move: " << gemini << endl;
    } else {
        gemini = "S";
        cout << "Random No. " << randomNum << endl;
        cout << "Gemini's move: " << gemini << endl;
    }; 

    if (prompt == "R") {
        if (gemini == "S") {
            cout << "You won!" << endl;
        } else if (gemini == "P") {
            cout << "You lost!" << endl;
        } else {
            cout << "It's a draw!" << endl;
        }
    } else if (prompt == "P") {
        if (gemini == "R") {
            cout << "You won!" << endl;
        } else if (gemini == "S") {
            cout << "You lost!" << endl;
        } else {
            cout << "It's a draw!" << endl;
        }
    } else if (prompt == "S") {
        if (gemini == "P") {
            cout << "You won!" << endl;
        } else if (gemini == "R") {
            cout << "You lost!" << endl;
        } else {
            cout << "It's a draw!" << endl;
        }
    };

    return 0;
}

















