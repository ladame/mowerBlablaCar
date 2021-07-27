#ifndef Mower_H
#define Mower_H
#include <string>
#include "Coordinates.hpp"

using namespace std;

class Mower : public Coordinates{
    private:
    char orientation;
    string instruction;

    public:
    Mower(string const & , string const & );
    void setOrientation(char);
    char getOrientation();

};

#endif