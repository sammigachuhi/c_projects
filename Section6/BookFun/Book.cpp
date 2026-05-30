#include <iostream>
#include <string>
#include "Book.h"

Book::Book(string author, string title, string genre, int numPages) {
    this -> author = author;
    this -> title = title;
    this -> genre = genre;
    this -> numPages = numPages;
} // end ctor

string Book::getAuthor() const {
    return author;
}

string Book::getTitle() const {
    return title;
}

string Book::getGenre() const {
    return genre;
}

int Book::getNumPages() const {
    return numPages;
}


void Book::printBookDetails() const {
    cout << getTitle() << " by " << getAuthor() 
        << " has " << getNumPages() << " pages, "
        << "and its genre is " << getGenre() << endl;
}

// void Book::printBookDetails() const {
//     cout << title << " by " << author 
//         << " has " << numPages << " pages, "
//         << "and its genre is " << genre << endl;
// }
