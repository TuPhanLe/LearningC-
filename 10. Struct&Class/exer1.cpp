#include <iostream>
#include <string>
const int Amount = 100;
struct Employee{
    std::string name;
    // char name[100];
    int age; 
    int rate; 
    int salary; 
};
void InputDataOfEmployee(Employee *employee, int index)
{
    for(int i = 0; i < index; i++){
    std::cout << "Nhap thong tin nhan vien thu " << i+1;
    std::cout << "\nNhap ten: "; 
    std::cin.ignore();  
    std::getline(std::cin,(employee+i)->name);
    std::cout << "\nNhap tuoi: "; std::cin >> (employee+i)->age;
    std::cout << "\nNhap he so luong: "; std::cin >> (employee+i)->rate;  
    (employee+i)->salary = (employee+i)->rate * 3000000;
    } 
}


int main()
{   
    Employee employee[Amount]; 
    int SalaryAll = 0;
    int number = 0;
    std::cout<< "MOI NHAP SO LUONG NHAN VIEN ";
    std::cin >> number;
    InputDataOfEmployee(employee,number);
    for(int i = 0; i < number ; i ++)
    {
        SalaryAll += (employee+i)->salary;
    }

    std::cout << SalaryAll/number;
    return 0;
}