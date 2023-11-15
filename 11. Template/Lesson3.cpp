#include <iostream>
#include <typeinfo>


template<typename T, int value>
struct ABC{
    T array[value];

    void DisplayTheNumberByteOfStruct(){
        std::cout<<sizeof(ABC)<<"\n";
    }
};

int main(){

    ABC<int,10> a;
    ABC<char,10> b;
    a.DisplayTheNumberByteOfStruct();
    b.DisplayTheNumberByteOfStruct();

    return 0;
}