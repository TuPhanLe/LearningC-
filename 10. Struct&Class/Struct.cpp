#include <iostream>

const int lengthOfArray = 100;

struct person{
    
    // std::string nameInString;

    char nameInArray[lengthOfArray] = "Toi la nguoi dau tien";
    int age;
    float height;
    person(){
        std::cout<< "Creat a person" << "\n";
    };   
};
int main(){
    person theFirstMan[3];
    // std::cout << (theFirstMan+1)->age;

}