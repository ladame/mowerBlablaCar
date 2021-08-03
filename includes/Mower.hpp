#ifndef Mower_H
#define Mower_H
#include <string>
#include "Coordinates.hpp"

using namespace std;

class Mower : public Coordinates{
    
    private:
    const char*   instruction;
    static int instanceMower;
    
    public:
    Mower(string const & , string const & );
    void setPosition(Coordinates);
    Coordinates getPosition();
    void run();
    Coordinates move(char charCommand);
    void northCase(char charCommand);
    void westCase(char charCommand);
    void southCase(char charCommand);
    void eastCase(char charCommand);

};

#endif