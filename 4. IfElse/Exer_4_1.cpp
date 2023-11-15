#include <iostream>
#include <string>
#include <cmath>


int main()
{
    int SoChia, SoBiChia, SoDu;
    std::cout << "nhap so bi chia : "; std::cin>>SoBiChia;
    std::cout << "nhap so chia : "; std::cin>>SoChia;
    std::cout << "\n";
    SoDu = SoBiChia % SoChia;
    if(SoDu)
    {
        std::cout << SoBiChia << " Khong chia het cho " << SoChia << " Du " << SoDu;
    }
    else 
    {
         std::cout << SoBiChia << " chia het cho " << SoChia << " Du " << SoDu ;
    }
}	