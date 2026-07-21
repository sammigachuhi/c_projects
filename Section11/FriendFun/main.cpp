#include "Rectangle.h"
#include "RectangleHelper.h"
#include <iostream>
using namespace std;

void changeData(Rectangle& rect);
void printData(Rectangle& rect);

int main() {
    Rectangle r1(10, 25);

    RectangleHelper helper;


    cout << "r1 area: " << r1.area() << endl;

    cout << "\n-------------printData function ----------------" << endl;
    printData(r1);
    cout << endl;

    changeData(r1);
    cout << "\n-------------printData function ----------------" << endl;
    printData(r1);

    cout << "Now, r1 area: " << r1.area() << endl;

    helper.modifyRectangle(r1);
    cout << "\n-------------printData function ----------------" << endl;
    printData(r1);
    cout << "after helper modifies, area: " << r1.area() << endl;

    ////////////////////////////////////
    // printData
    cout << "\n-------------printData function ----------------" << endl;
    printData(r1);


    return 0;
}

void changeData(Rectangle& rect) {
    rect.length = 100;
    rect.width = 100;
}

void printData(Rectangle& rect) {
    cout << "Rectangle length: " << rect.length << endl;
    cout << "Rectangle width: " << rect.width << endl;
}




