#include "includes/Lawn.hpp"

Lawn::Lawn(string const & axes){
    Coordinates coordinates(axes);
    x = coordinates.getCoordinateX();
    y = coordinates.getCoordinateY();
}

int Lawn::getLawnX(){return x;}
int Lawn::getLawnY(){return y;}
