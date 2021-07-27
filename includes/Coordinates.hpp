#ifndef Coordinates_H
#define Coordinates_H

#include <string>
#include <cstring>
#include <sstream>

using namespace std;
class Coordinates{
    private:
        int x;
        int y;
        char *orientation;

    public:
    Coordinates(string const & xy);
    int getCoordinateX();
    int getCoordinateY();
};
#endif