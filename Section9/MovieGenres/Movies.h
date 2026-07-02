#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <string>
#include <array>
using namespace std;

class Movies {
    public:
        string getMovieGenres() const;

    private:
        string movieName;
};

#endif