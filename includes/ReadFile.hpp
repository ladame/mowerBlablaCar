#ifndef ReadFile_H
#define ReadFile_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
class ReadFile{
    private:
    vector<std::string>  inputLines;

    public:
    ReadFile(string);
    vector<std::string>& getInputLines();
};
#endif