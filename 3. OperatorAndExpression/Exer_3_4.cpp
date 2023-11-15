#include <iostream>
#include <string>
#include <cmath>
#define Pi 3.14

int main()
{
    int n,a,b,c; 
    std::cout << "Nhap n ";
    std::cin >> n;
    a = n / 100;
    b = (n - a*100) / 10;
    c = n - a*100 - b*10; 
    n = c*100 + b*10 + a;
    std::cout << "\nSo dao nguoc la " << n;

}	