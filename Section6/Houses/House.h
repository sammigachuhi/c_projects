#ifndef HOUSE_H 
#define HOUSE_H 

#include <string>
using namespace std;
// contain class declarations and member function prototypes
class House {
    public: 
        // member functions belong to a class or methods.
        // setters
        void setNumStories(int numStories);

        void setNumWindows(int numWindows);

        void setColor(string color);

        // getters or accessors -- read data memebrs of the fields dont modify
        int getNumStories() const;

        int getNumWindows() const;

        string getColor() const;

        void print() const;

    private: 
        int numStories;
        int numWindows;
        string color;

};


#endif
















