#include <iostream>
#include <vector>

std::vector<int> hello(){
    std::vector<int> v3 = {11,22,33,44,55};
    return v3;
}

int main(){

    std::vector<int> v1 = {12,22,32,42,52};
    std::vector<int> v2 = {2,4,6,8,10};

    v2 = hello();
    v2.push_back(24);
    v2.push_back(332);
    for(int i = 0; i < v2.size(); i++){
        std::cout<< v2[i] << "\n";
    }    
    return 0;
}