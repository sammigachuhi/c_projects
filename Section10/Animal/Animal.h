#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
    public:
        Animal (string name, double weight);

        // Setters 
        void setName(string name);
        void setWeight(double weight);

        // Getters 
        string getName() const;
        double getWeight() const;

        virtual string makeNoise() const = 0;

        virtual string eat() const = 0;

        void display() const;


    private:
        string name;
        double weight;
};


#endif