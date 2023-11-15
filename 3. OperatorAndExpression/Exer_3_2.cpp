#include <iostream>
#include <string>
#include <cmath>
#define Pi 3.14

int main()
{
    int bankinh; 
    std::cout << "Nhap ban kinh ";
    std::cin >> bankinh;
    float chuvi = 2 * Pi * bankinh;
    float dientich = pow(bankinh,2)*Pi;
    std::cout << "\nChu vi hinh tron la " << chuvi;
    std::cout << "\nDien tich hinh tron la " << dientich; 

}	