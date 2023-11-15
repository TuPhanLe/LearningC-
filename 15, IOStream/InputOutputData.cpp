#include <iostream>
#include <string>
#include <fstream>


int main(){

    std::string x,y;
    std::ifstream input("Input.txt");
    input.ignore();
    std::getline(input,x);
    std::getline(input,y);
    std::ofstream output("Output.txt");
    output<<x+y;
    std::cout<<x+y; 

    return 0;
}