#include "IceCreamSundae.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// IceCreamSundae::IceCreamSundae(){
//     string flavour = "Plain vanilla";
// }

IceCreamSundae::IceCreamSundae(string flavour) {
    this -> flavour = flavour;
}

void IceCreamSundae::addTopping(string topping) {
    toppings.push_back(topping);
}

string IceCreamSundae::getFlavour() const {
    return flavour;  
}

vector<string> IceCreamSundae::getToppings() const {
    return toppings;
    // for (auto i : toppings) {
    //     cout << i << endl;
    // }
    // return 0;
}

void IceCreamSundae::printSundae() const {
    cout << "======You ordered this ice cream========" << endl;
    cout << "Flavour: " << flavour << endl;
    cout << "--Toppings:---\n " << endl;
    for (auto i : toppings) {
        cout << i << endl;
    }
    // return 0;

}















