#ifndef LANGUAGE_H 
#define LANGUAGE_H

#include <iostream>
#include <string>
#include <map>
using namespace std;

class LanguageTranslator {
    public:
        string addTranslation(string englishWord, string translateWord);
        string getTranslation(string englishWord);
        void printAll();

    private:
        map<string, string> translations;

};

#endif