#include <iostream>
#include <sstream>
#include "includes/Coordinates.hpp"

Coordinates::Coordinates(string const &xy){
    stringstream ss(xy);
    string s("");
    
    char delimiter(' ');
    string axes[xy.length()];
    int index = 0;
    while (getline(ss, s, delimiter)) {
        axes[index] = s;
        if(index==2){
            strcpy(orientation ,s.c_str());
        }
        index++;
    }
    //cout << "\n axes[0]" <<axes[0];
    //cout << "\n axes[1]" <<axes[1];
    x= stoi(axes[0]);
    y = stoi(axes[1]);

}

int Coordinates::getCoordinateX(){
    return x;
}

int Coordinates::getCoordinateY(){
    return y;
}
