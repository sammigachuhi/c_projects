#include "Language.h"

#include <iostream>
#include <string>
#include <map>
using namespace std;

string LanguageTranslator::addTranslation(string englishWord, string translateWord) {
   translations.insert({englishWord, translateWord});

   cout << "You added English word: `" << englishWord << "` and Translation: " << translateWord << endl;

   return "Done";

}

string LanguageTranslator::getTranslation(string englishWord) {
    cout << "The translation for English word: `" << englishWord << "` is: " << endl;
    cout << translations[englishWord] << endl;

    return "Done";

};

void LanguageTranslator::printAll() {
    cout << "------ Total words with their translations ------" << endl;
   for (auto x : translations) {
    cout << "English word: " << x.first << " Translation: " << x.second << endl;
   }

};







