#include <iostream>
#include <string>
#include <cmath>


int main()
{
    float x,y; 
    std::cin >> x;
    std::cin >> y;
    float z = 1/(x+y); 
    z = 1 / (x + z );
    z = 1 / (x + z);
    z = x + z;

    float power = pow((3*x+2*y),2);
    float trimp = pow((5*x+1),3);

    std::cout<< "Ans No.1 = " << x*y + x/y;
    std::cout<< "\nAns No.2 = " << z;
    std::cout<< "\nAns No.3 = " << sqrt(power*trimp);

}	