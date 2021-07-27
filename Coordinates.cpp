#include <iostream>
#include <sstream>
#include "includes/Coordinates.hpp"

Coordinates::Coordinates(string const &xy){
    stringstream ss(xy);
    string s("");
    //cout << "xy" << xy << '\n';
    char delimiter(' ');
    string axes[xy.length()];
    int index = 0;
    while (getline(ss, s, delimiter)) {
        axes[index] = s;
        index++;
    }
    x= stoi(axes[0]);
    y = stoi(axes[1]);
    
  /*if(axes->length() == 3){
        strcpy(orientation ,axes[2].c_str());
    }*/
}

int Coordinates::getCoordinateX(){
    return x;
}

int Coordinates::getCoordinateY(){
    return y;
}
