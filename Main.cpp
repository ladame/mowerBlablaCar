/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "includes/ReadFile.hpp"
#include "includes/Lawn.hpp"
#include "includes/Mowers.hpp"

using namespace std;

int main()
{
    vector<std::string> inputLines;
    ReadFile readFile("input.txt");
    inputLines = readFile.getInputLines();
    Lawn lawn(inputLines[0]);
    list<Mower> mowers;
    cout << "inputLines.size()" << inputLines.size() << "\n";
    for(int index=1; index < inputLines.size()-1; index++){
        // use index++ will give undefined behaviour, dunno which one will be put at the stack first 
        // so the pass parameter poteiantially will be reversed
        Mower mower(inputLines[index], inputLines[index+1]);
       // cout << "inputLines[index]" << inputLines[index];
       // cout << "inputLines[index+1]" << inputLines[index+1];
        index += 1;  
       // cout << "index" << index << "\n";
        //use emplace_back so it will create the object instead of copy, for optimization     
        mowers.emplace_back(mower);        
    }

    /*
    for(auto& mower : mowers){
        mower.run();
    }
    */
    

    return 0;
}