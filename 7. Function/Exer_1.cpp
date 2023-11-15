#include <iostream>
    /*
    1 - program_1()
    Input: 3 số a, b, c vừa nhập
    Output: Trung bình cộng của 3 số a, b, c
    */
float a,b,c;
int InputData()
{
    std::cout << "Moi nhap a = "; std::cin >> a;
    std::cout << "Moi nhap b = "; std::cin >> b;
    std::cout << "Moi nhap c = "; std::cin >> c;
    return 0;
}
int Maximum()
{
    float max;
    if(a>b){
        max = a;
    }else{
        max = b;
    }
    if(max<c){
        max = c;
    }
    std::cout<<"\nSo lon nhat trong 3 so la " << max;
}
int Average()
{
    float ave = (a+b+c)/3;
    std::cout << "Average =  "<< ave;
    return 0;
}
int main()
{
    InputData();
    Average();
    Maximum();

    return 0;
}