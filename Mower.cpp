#include "includes/Mower.hpp"
#include <iostream>

int Mower::instanceMower = 0;
Mower::Mower(string const & axes, string const & listInstruction, Lawn const & _lawn):Coordinates(axes),instruction(&listInstruction[0]), lawn(_lawn) {
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
    
    cout << "Last position mower : " << instanceMower << "(" << x << ", " << y  << ")\n" ;
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
        xMinus1();
        *orientation = 'W';
    }else if(charCommand=='R'){
        xPlus1();
        *orientation = 'E';
    }else if(charCommand=='F'){
        yPlus1();
        *orientation = 'N';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::eastCase(char charCommand){
    if(charCommand=='L'){
        yPlus1();
        *orientation = 'N';
    }else if(charCommand=='R'){
        yMinus1();
        *orientation = 'S';
    }else if(charCommand=='F'){
        xPlus1();
        *orientation = 'E';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::southCase(char charCommand){
    if(charCommand=='L'){
        xPlus1();
        *orientation = 'E';
    }else if(charCommand=='R'){
        xMinus1();
        *orientation = 'W';
    }else if(charCommand=='F'){
        yMinus1();
        *orientation = 'S';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::westCase(char charCommand){
    if(charCommand=='L'){
        yMinus1();
        *orientation = 'S';
    }else if(charCommand=='R'){
        yPlus1();
        *orientation = 'N';
    }else if(charCommand=='F'){
        xMinus1();
        *orientation = 'W';
    }else{
        cout << "Wrong instruction \n" ;
    }
}

void Mower::xMinus1(){
    if((x-1) >= 0){
        x = x-1;
    }
}

void Mower::xPlus1(){
    if((x+1) <= lawn.getLawnX()){
        x = x+1;
    }
}

void Mower::yMinus1(){
    if((y-1) >= 0){
        y = y-1;
    }
}

void Mower::yPlus1(){
    if((y+1) <= lawn.getLawnY()){
        y = y+1;
    }
}