#ifndef CAT_H
#define CAT_H 
#include <string>
#include "Animal.h"
using namespace std;

class Cat : public Animal {
    public:
        Cat (string name, double weight);

        string makeNoise() const override;
        string eat() const override;
        void chaseMouse() const;

};

#endif














