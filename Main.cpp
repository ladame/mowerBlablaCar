/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "includes/ReadFile.hpp"
#include "includes/Lawn.hpp"
#include "includes/Mower.hpp"
#include <thread>
#include <list>


using namespace std;
void function(string const & axes, string const & listInstruction, Lawn const & lawn)
{
    Mower mower(axes, listInstruction, lawn);
//execution part
   //cout << "\nThread" << " \n";
}

int main()
{
    vector<std::string> inputLines;
    std::vector<std::thread> ThreadVector;
    ReadFile readFile("input.txt");
    inputLines = readFile.getInputLines();
    Lawn lawn(inputLines[0]);
    list<Mower> mowers;
    //cout << "inputLines.size()" << inputLines.size() << "\n";
    for(int index=1; index < inputLines.size()-1; index++){
        // use index++ will give undefined behaviour, dunno which one will be put at the stack first 
        // so the pass parameter poteiantially will be reversed
        Mower mower(inputLines[index], inputLines[index+1], lawn);
       // cout << "inputLines[index]" << inputLines[index];
       // cout << "inputLines[index+1]" << inputLines[index+1];
        
       // cout << "index" << index << "\n";
        //use emplace_back so it will create the object instead of copy, for optimization     
        //mowers.emplace_back(mower);
        //ThreadVector.emplace_back([&](){function(inputLines[index], inputLines[index+1]);});
        //ThreadVector.emplace_back([&](){Mower mower(inputLines[index], inputLines[index+1], lawn);});
        index += 1;  
    }

    int numbThread(0);
    for(auto& t: ThreadVector)
    {
        t.join();
        numbThread++;
    }
    /*
    for(auto& mower : mowers){
        mower.run();
    }
    */
    

    return 0;
}
