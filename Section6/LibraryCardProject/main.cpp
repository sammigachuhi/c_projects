#include "LibraryCard.h"
#include <iostream>
#include <string>

int main() {

    LibraryCard student1("Samuel Gachuhi");

    student1.checkoutBook(7);

    student1.returnBook(3);

    cout << "=====Library borrower details====" << endl;
    cout << "Student name: " << student1.getCardholderName() << endl;
    cout << "No. of books borrowed (remaining): " << student1.getBooksCheckedOut() << endl;

    return 0;
}





















