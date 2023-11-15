#include <iostream>
#include <string>
int main()
{
	int Age = 0;
	float Weight = 0;
	float High = 0;
	char Mark = 'A';
	bool got_married = 0;
	std::string name = "";

	std::cout << "Please fill out this paper \n";
	std::getline(std::cin,name);
	std::cout << "\nAge ";
	std::cin >> Age;
	std::cout << "\nWeight ";
	std::cin >> Weight;	
	std::cout << "\nHigh ";
	std::cin >> High;		
	std::cout << "\nGot married?  ";
	std::cin >> got_married;	
	std::cout << "Your status is \n name = " << name 
				<< "\n Age = "<< Age 
				<<"\n Weight " << Weight << "\n High " << High 
				<< "\n Got married = " << got_married; 
	return 0;
}