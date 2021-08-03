#ifndef Mower_H
#define Mower_H
#include <string>
#include "Coordinates.hpp"
#include "Lawn.hpp"

using namespace std;

class Mower : public Coordinates{
    
    private:
    const char*   instruction;
    static int instanceMower;
    Lawn lawn;
    
    public:
    Mower(string const & , string const & , Lawn const & lawn);
    void setPosition(Coordinates);
    Coordinates getPosition();
    void run();
    Coordinates move(char charCommand);
    void northCase(char charCommand);
    void westCase(char charCommand);
    void southCase(char charCommand);
    void eastCase(char charCommand);
    void xMinus1();
    void xPlus1();
    void yMinus1();
    void yPlus1();

};

#endif