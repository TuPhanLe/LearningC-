#include <iostream>
int last_index = 0;
const int length = 100;
void InputArray(int array[], int index)
{
    for(int i =0; i < index; i++)
    {
        std::cout<< "Nhap phan tu thu " << i << " : ";
        std::cin>>array[i];
    }
}
void print(int array[], int index)
{
    for(int i =0; i < index; i++)
    {
        std::cout<< "Nhap phan tu thu " << i << " co gia tri la:  "<< array[i] << "\n";
    }

}
void pushIntoTail(int array[], int number)
{
    if(last_index > length)
    {
        std::cout<<"Warning!!! Full of array";
        return;
    }
    array[last_index] = number;
    last_index++;
}
void insert(int array[], int index, int number)
{
    if(last_index > length)
    {
        std::cout<<"Warning!!! Full of array";
        return;
    }
    if(index<0 || index > last_index)
    {
        std::cout << "Warning!!! Wrong Index";
        return;
    }
    for(int i = last_index; i >= index-1; i-- )
    {
        array[i+1] = array[i];
    }
    array[index-1] = number;
    last_index++;
}
void erase(int array[],int index)
{
    if(last_index > length)
    {
        std::cout<<"Warning!!! Full of array";
        return;
    }
    if(index<0 || index > last_index)
    {
        std::cout << "Warning!!! Wrong Index";
        return;
    }
    for(int i = index; i <= last_index; i++)
    {
        array[i] = array[i+1];
    }
    last_index--;
}
int main()
{
    
    int array[length];
    // InputArray(array,2);
    pushIntoTail(array,2);
    pushIntoTail(array,3);
    pushIntoTail(array,4);
    pushIntoTail(array,5);    
    insert(array,2,1);
    erase(array,2);
    print(array,5);
    
    return 0;

}