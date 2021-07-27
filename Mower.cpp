#include "includes/Mower.hpp"
#include <iostream>

Mower::Mower(string const & axes, string const & listInstruction):Coordinates(axes){
    instruction = listInstruction;
}

void Mower::setOrientation(char direction){
    orientation = direction;
}

char Mower::getOrientation(){
    return orientation;
}