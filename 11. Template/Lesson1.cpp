#include <iostream>
#include <typeinfo>
template <typename T>
void hello(){
    std::cout<<"Type "<<typeid(T).name()<< "; ";
    std::cout<<"Type "<<sizeof(T)<< "bytes \n";
}
int main(){
    hello<int>();
    hello<char>();
    hello<float>();
}