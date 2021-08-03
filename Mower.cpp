#include "includes/Mower.hpp"
#include <iostream>

int Mower::instanceMower = 0;
Mower::Mower(string const & axes, string const & listInstruction):Coordinates(axes),instruction(&listInstruction[0]) {
    //char_arr = &listInstruction[0];
    instanceMower++;
    this->run();
    
}

void Mower::run(void){
    cout << "\n===============================================================" << " \n";
    cout << "Run the mower: " << instanceMower << " \n";
    cout << "Initial position : (" << x << ", " << y  << ")\n" ;
    cout << "Initial orientation: " << orientation << "\n" ;
    cout << "List of instruction: " << instruction << "\n" ;
    
    int index = 0;
    while(instruction[index] != '\0'){
        //cout << "Command: " << instruction[index] << "\n" ;
        cout << "Current position : (" << x << ", " << y  << ")\n" ;
        cout << "Current orientation: " << orientation << "\n" ;
        this->move(instruction[index]);
        index++;
    }
    
    cout << "Last position : (" << x << ", " << y  << ")\n" ;
    cout << "Last orientation: " << orientation << "\n" ;
    
}

Coordinates Mower::move(char charCommand){
    if(*orientation == 'N') northCase(charCommand);
    else if(*orientation == 'E') eastCase(charCommand);
    else if(*orientation == 'S') southCase(charCommand);
    else if(*orientation == 'W') westCase(charCommand);
    
}

void Mower::northCase(char charCommand){
    if(charCommand=='L'){
        x = x-1;
        *orientation = 'W';
    }else if(charCommand=='R'){
        x = x+1;
        *orientation = 'E';
    }else if(charCommand=='F'){
        y = y+1;
        *orientation = 'N';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::eastCase(char charCommand){
    if(charCommand=='L'){
        y = y+1;
        *orientation = 'N';
    }else if(charCommand=='R'){
        y = y-1;
        *orientation = 'S';
    }else if(charCommand=='F'){
        x = x+1;
        *orientation = 'E';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::southCase(char charCommand){
    if(charCommand=='L'){
        x = x+1;
        *orientation = 'E';
    }else if(charCommand=='R'){
        x = x-1;
        *orientation = 'W';
    }else if(charCommand=='F'){
        y = y-1;
        *orientation = 'S';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::westCase(char charCommand){
    if(charCommand=='L'){
        y = y-1;
        *orientation = 'S';
    }else if(charCommand=='R'){
        y = y+1;
        *orientation = 'N';
    }else if(charCommand=='F'){
        x = x-1;
        *orientation = 'W';
    }else{
        cout << "Wrong instruction \n" ;
    }
}
