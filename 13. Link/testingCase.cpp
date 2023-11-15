#include <iostream>

struct Number{
    int number; 
    Number* link;
};

int main(){


    Number firstNum = {10,NULL};
    Number* Link = new Number({15,NULL});
    firstNum.link = Link;
    std::cout << firstNum.link->number;


    return 0;
}