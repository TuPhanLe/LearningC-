#include <iostream>
#include <string>
#include <cmath>
#define Pi 3.14

int main()
{
    bool a, b, c, d, e, f;
    std::cout << "Tôi chén Ngọc Trinh "; std::cin>>a;
    std::cout << "\nTôi chén Maria Ozawa "; std::cin >> b;
    c = a && b; 
    d = a || b;     
    e = a && !b;
    f = (a || b ) && !(a&&b);
    std::cout << c << " " << d << " "<< e << " "<< f;

}	