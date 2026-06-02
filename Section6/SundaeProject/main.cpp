#include "IceCreamSundae.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    IceCreamSundae myIceCream("Strawberry");

    myIceCream.addTopping("nuts");

    myIceCream.addTopping("berries");

    myIceCream.addTopping("chocolate");

    myIceCream.addTopping("honey");

    myIceCream.printSundae();

    IceCreamSundae yourIceCream("Vanilla and Chocolate mix");

    yourIceCream.addTopping("blueberries");
    yourIceCream.addTopping("candamom");

    yourIceCream.printSundae();

    return 0;
}



















