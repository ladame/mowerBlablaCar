#include "includes/ReadFile.hpp"

ReadFile::ReadFile(string fileName){
    fstream inputFile(fileName);
    if(inputFile.is_open()){
        string readInput;
        while(inputFile){
            getline(inputFile,readInput);
            inputLines.push_back(readInput);
        }
        inputFile.close();

    }else{
        cout << "Cannot read file";
    }
}

vector<std::string>& ReadFile::getInputLines(){
    return inputLines;
}
