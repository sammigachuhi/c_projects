#include "LibraryCard.h"
#include <iostream>
#include <string>

// LibraryCard::LibraryCard(string cardhoderName) {
//     string cardholderName = "";
// }

LibraryCard::LibraryCard(string cardholderName) {
    this -> cardholderName = cardholderName;
}

void LibraryCard::checkoutBook(int booksCheckedOut) {
    // int counter = 0;
    // booksCheckedOut += 0;
    if (booksCheckedOut > 0) {
        this -> booksCheckedOut = booksCheckedOut;
    }
    
}

void LibraryCard::returnBook(int noOfBooks) {
    if (noOfBooks <= booksCheckedOut) {
        this -> noOfBooks = noOfBooks;
    }
}

string LibraryCard::getCardholderName() const {
    return cardholderName;
}

int LibraryCard::getBooksCheckedOut() const {
    return booksCheckedOut - noOfBooks;
}








