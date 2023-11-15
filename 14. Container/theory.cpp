
#include <iostream>
#include <array>
#include <string>
#include <list>
#include <vector>

int main(){

    std::array<int, 5> a = {1,2,3,4,5}; 
    
    // for(int i = 0; i < a.size(); i++ ) std::cout<<a[i]<<"\n";

    std::string s = "Xin chao tat ca moi nguoi";
    // std::cout << s << "\n";

    std::list<int> l = {1,2,3,4,5};
    // std::cout<< l.size()
    
    std::vector<int> v = {1,2};

    std::cout<< sizeof(s);

    return 0;
}