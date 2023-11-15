#include <iostream>

int main()
{
    int n; 
    bool bienChay = 0;
    std::cout << "Moi nhap vao n tu 1 -> 9 : ";
    std::cin >>n;
    n-=1;
    for(int i = 0; i<= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
             std::cout << abs(i-j); 
           
        }
        std::cout<<"\n";
    }
}