#ifndef ICECREAMSUNDAE_H
#define ICECREAMSUNDAE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class IceCreamSundae {

    public:
        // IceCreamSundae();
        
        IceCreamSundae(string flavour);

        void addTopping(string topping);

        string getFlavour() const;

        vector<string> getToppings() const;

        void printSundae() const;

    private: 
        string flavour;
        // string topping;
        vector<string> toppings;
};

#endif

















