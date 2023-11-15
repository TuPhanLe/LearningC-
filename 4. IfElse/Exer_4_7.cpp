#include <iostream>
#include <string>
#include <cmath>


int main()
{
    float a, b, c, max, min;
    std::string  sameSign = "";  
    std::cout << "nhap so a : "; std::cin>>a;
    std::cout << "nhap so b : "; std::cin>>b;
    std::cout << "nhap so c : "; std::cin>>c;
    std::cout << "\n";
    a>b? max =a : max =b;
    max>c? max : max = c;
    a>b? min = b: min = a;
    min>c? min = c: min;
    sameSign = a*b*c>0? "Yes" : "No";

    std::cout << max << std::endl; 
    std::cout << min << std::endl; 
    std::cout << sameSign;
    


}