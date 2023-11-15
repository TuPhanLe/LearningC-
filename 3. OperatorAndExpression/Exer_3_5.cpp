#include <iostream>
#include <string>
#include <cmath>
#define Pi 3.14

int main()
{
    float xA,yA,xB,yB,xC,yC; 
    float DoDaiAB, DoDaiOI, DoDaiOG;
    std::cout << "Nhap diem A "; std::cin >> xA >> yA; 
    
    std::cout << "\nNhap diem B "; std::cin >> xB >> yB;   
    
    // std::cout << "\nNhap diem C "; std::cin >> xC >> yC;   
    

    DoDaiAB = sqrt(pow((xA-xB),2) + pow((yA-yB),2));

    std::cout << DoDaiAB;
}	