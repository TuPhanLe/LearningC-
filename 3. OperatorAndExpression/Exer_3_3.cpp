#include <iostream>
#include <string>
#include <cmath>
#define Pi 3.14

int main()
{
    float a,b,c; 
    std::cout << "Nhap canh a ";
    std::cin >> a;
    std::cout << "\nNhap canh b ";
    std::cin >> b;
    std::cout << "\nNhap canh c ";
    std::cin >> c;
    float chuvi = (a+b+c)/2;
    float dientich = sqrt(chuvi*(chuvi-a)*(chuvi-b)*(chuvi-c));

    std::cout << "\nDien tich tam giac la " << chuvi; 

}	