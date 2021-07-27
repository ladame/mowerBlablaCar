//
//  Main.cpp
//  mowerBlablaCar
//
//  Created by <author> on 27/07/2021.
//
//

#include <list>
#include "includes/ReadFile.hpp"
#include "includes/Lawn.hpp"
#include "includes/Mower.hpp"

using namespace std;

int main()
{
    vector<std::string> inputLines;
    ReadFile readFile("input.txt");
    inputLines = readFile.getInputLines();
    Lawn lawn(inputLines[0]);
    list<Mower> mowers;
    
    for(int index=1; index < inputLines.size()-1; index++){
        Mower mower(inputLines[index], inputLines[index+1]);   // use index++ will give undefined behaviour, dunno which one will be put at the stack first so the pass parameter will be reversed
        index += 1;  
        mowers.push_back(mower);        
    }
    
    cout << "lawnX" << lawn.getLawnX() << '\n';
    cout << "lawnY" << lawn.getLawnY() << '\n';
    for(auto & mower : mowers){
      cout << "mowerX" << mower.getCoordinateX() << '\n';
      cout << "mowerY" << mower.getCoordinateY() << '\n'; 
    }

    return 0;
}
