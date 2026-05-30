#include <iostream>
#include "Book.h"
using namespace std;

// void printBookDetails(const Book& book);

int main() {

    Book gameOfThrones("George Martin", "Game of Thrones", "Fantasy", 864);
    gameOfThrones.printBookDetails();

    Book mathBook("James Stewart", "Calculus", "Math", 1392); 
    mathBook.printBookDetails();

    Book cppBook("Bjarnes Stroutstop", "The C++ Programming Language", "Programming", 1376);
    cppBook.printBookDetails();

    Book flinxBook("Samuel Gachuhi", "Flinx of the Commonwealth: Transcedence", "Sci-Fi", 650);
    flinxBook.printBookDetails();

    // printBookDetails(gameOfThrones);
    // printBookDetails(mathBook);
    // printBookDetails(cppBook);

    return 0;
}

// void printBookDetails(const Book& book) {
//     cout << book.getTitle() << " by " << book.getAuthor() 
//         << " has " << book.getNumPages() << " pages, "
//         << "and its genre is " << book.getGenre() << endl;
// }





