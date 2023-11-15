/* Vấn đề khi cấp phát bộ nhớ heap => đối với C thì ta sẽ xài malloc và free
    Đối với C++ ta sẽ sử dụng new và delete 
*/
#include <iostream>

struct ABC{
    int age; 
    int height;

    ABC(int a, int h)
    {
        std::cout<<"creat a abc struct\n";
    }
    ~ABC()
    {
        std::cout<<"delete a abc struct\n";
    }
};
void function(ABC *a)
{
    delete(a);
}
// ABC *a = new ABC(30,20);
int main(){

    ABC *b = (ABC*) malloc(sizeof(ABC));
        // ABC a(30,20);
        free(b);
    std::cout<<"EndOfFile";
    

    return 0;
}