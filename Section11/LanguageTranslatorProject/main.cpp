#include "Language.h"

#include <iostream>
#include <string>
#include <map>
using namespace std;

int userInput;
string englishWord;
string translateWord;

LanguageTranslator l1;

map<string, string> translations;

int main() {

    cout << "Enter any of the following numbers: 1, 2, 3, or 0" << endl;

    cin >> userInput;

    if (userInput == 1) {
        cout << "\nEnter the English word: " << endl;
        cin >> englishWord;
        cout << "\nEnter the Translation: " << endl;
        cin >> translateWord;

        l1.addTranslation(englishWord, translateWord);
    } else if (userInput == 2) {
        cout << "\nEnter the English word to translate: " << endl;
        cin >> englishWord;
        l1.getTranslation(englishWord);
    } else if (userInput == 3) {
        l1.printAll();
    } else if (userInput == 0) {
        exit(0);
    }

    return 0;
}




















