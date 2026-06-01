#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

#include <iostream>
#include <string>
using namespace std;

class LibraryCard {
    public: 
        // LibraryCard();
        LibraryCard(string cardholderName);
        // setters
        void checkoutBook(int booksCheckedOut);
        void returnBook(int noOfBooks);

        // getters 
        string getCardholderName() const;
        int getBooksCheckedOut() const;
    
    private:
        string cardholderName;
        int booksCheckedOut;
        int noOfBooks;

};


#endif






























