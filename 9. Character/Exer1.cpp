#include <iostream>
#include <string>
std::string arrayContainBook[100];
std::string arrayContainIDAndName[100];
int last_index =0; 
int lastIndex = 0;
void ParseData(std::string array[], int* last_index, std::string* inputArray, char symbol)
{
   int i = inputArray->find(symbol);
    while(i != std::string::npos)
    {
        array[*last_index] = inputArray->substr(0,i);
        std::cout<<array[*last_index]<<"\n";
        *inputArray = inputArray->substr(i+1);
        i = inputArray->find('|');
        last_index ++;
    }    
        array[*last_index] = *inputArray;
        last_index++;
        for(int i = 0 ; i <= *last_index ; i++){
            std::cout<<array[i] << "\n";
        }
}
void ParseData(std::string array[], int* last_index, std::string arrayForInput[], int* lastIndex, char symbol)
{
    
    int i = arrayForInput[*lastIndex].find(symbol);
    while(i != std::string::npos)
    {
        array[*last_index] = arrayForInput[*lastIndex].substr(0,i);
        std::cout<<array[*last_index]<<"\n";
        arrayForInput[*lastIndex] = arrayForInput[*lastIndex].substr(i+1);
        i = arrayForInput[*lastIndex].find(symbol);
        last_index ++;
    }    
        array[*last_index] = arrayForInput[*lastIndex];
        last_index++;
        for(int i = 0 ; i <= *last_index ; i++){
            std::cout<<array[i] << "\n";
        }
}
int main(){
    std::string name = "1023;Dac nhan tam|8873;Bay vien ngoc rong|2372;Cha giau cha ngheo|900;Tham tu lung danh Conan|155;Tay Du Ky|231;Hong Lau Mong";
    // char name[] = "Xin|Chao|Tat|Ca";
    ParseData(arrayContainBook, &last_index, &name, '|');
    // ParseData(arrayContainIDAndName, &lastIndex, arrayContainBook, ';');
    return 0;
}

