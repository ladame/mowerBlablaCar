#ifndef Lawn_H
#define Lawn_H
#include "Coordinates.hpp"
#include <string>

using namespace std;
class Lawn{
    private:
        int x;
        int y;

    public:
        Lawn(string const &);
        int getLawnX();
        int getLawnY();
};
#endif