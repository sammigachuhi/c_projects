#include <iostream>
#include <string>
using namespace std;

// -------------- HOUSE CLASS ---------------------
class House {
    public: // specifier
        // member functions belong to a class or methods.
        // setters
        void setNumStories(int numStories) {
            this -> numStories = numStories;
        }

        void setNumWindows(int numWindows) {
            this -> numWindows = numWindows;
        }

        void setColor(string color) {
            this -> color = color;
        }

        // getters or accessors -- read data memebrs of the fields dont modify
        int getNumStories() const {
            return numStories;
        }

        int getNumWindows() const {
            return numWindows;
        }

        string getColor() const {
            return color;
        }

    private: // specifier
        // variables or data members or fields
        int numStories;
        int numWindows;
        string color;
};


void printHouseData(const House& aParameter);

//-------------- main function -----------------------------
int main() {

    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    cout << "My house is " << myHouse.getColor() 
        << " and has " << myHouse.getNumStories() 
        << " stories and " << myHouse.getNumWindows() 
        << " windows " << endl;

    cout << "-------------" << endl;

    cout << "Your house is " << yourHouse.getColor() 
        << " and has " << yourHouse.getNumStories() 
        << " stories and " << yourHouse.getNumWindows() 
        << " windows " << endl;

    cout << "------------" << endl;

    printHouseData(myHouse);
    cout << "=============" << endl;
    printHouseData(yourHouse);

    return 0;
}


void printHouseData(const House& aParameter) {

    string houseColor = aParameter.getColor();
    int houseStories = aParameter.getNumStories();
    int houseWindows = aParameter.getNumWindows();

    cout << "Architecture of my house" << endl;
    cout << "House color: " << houseColor << endl;
    cout << "No. of stories: " << houseStories << endl;
    cout << "No. of windows: " << houseWindows << endl;

}

















