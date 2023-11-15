// Cấp phát động -- Dynamic Allocation // 
/*Cách cấp phát vùng nhớ heap cho một vài biến hoặc struct và cách truy cập thông qua con trỏ*/

#include <iostream>


struct Person{
    std::string name;
    int age;
    int number; 
};
int main(){
    // Person FirstGuy = new Person(sizeof(Person)); 
    int *p = new int(10);                   /*Khởi tạo giá trị ban đầu cho con trỏ p là 10 */
    std::cout<<*p<<"\n";
    Person* FirstGuy = (Person*)malloc(sizeof(Person)); 
    FirstGuy->name = "Phan Le Tuan Tu";
    std::cout<<FirstGuy->name;
    return 0;
}