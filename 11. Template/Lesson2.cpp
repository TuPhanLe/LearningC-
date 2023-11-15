#include <iostream>
#include <typeinfo>

template <typename T>
struct Pole{
    T x; 
    T y;
    void displayTypeOfStruct(){
        std::cout<<"Type of struct member  is " << typeid(T).name() << "\n";
    }
};
int main(){

    Pole<int> pole1;
    Pole<char> pole2;
    Pole<std::string> pole3;
    pole1.displayTypeOfStruct();
    pole2.displayTypeOfStruct();
    pole3.displayTypeOfStruct();
    return 0;
}