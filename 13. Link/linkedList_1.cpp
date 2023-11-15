#include <iostream>

struct Number{
    int data;
    Number* next;
};

int main(){
    Number num1 = {10,NULL};
    Number num2 = {20,NULL};
    Number num3 = {30,NULL};
    Number *num4 = new Number ({40,NULL});
    Number *num5 = new Number ({50,NULL});
    Number *num6 = new Number ({60,NULL});

    Number *head = &num1;
    
    num1.next = &num2;
    num2.next = &num3;
    num3.next = num4;
    num4->next = num5;
    num5->next = num6;

    for(Number* num = head; num != NULL; num = num->next){
        std::cout<<num->data<< "\n";
    }

    return 0;
}