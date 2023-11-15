#include <iostream>

void concate(int a[],int length_a, int b[], int length_b, int c[], int length_c )
{
    for(int i = 0; i < length_c; i++){
        c[i]  = a [i];
    }
    int j = 0;
    for(int i = length_a; i < length_c; i++)
    {
        c[i] = b[j];
        j++;
    }
}
void split(int a[],int length_a, int b[], int length_b, int c[], int length_c){
    int j = 0;
    for(int i = 0; i < length_a; i++ ){
        a[i] = c[i];
    }
    for(int i = length_a; i< length_c; i++){
        b[j] = c[i];
        j++;
    }
}
int main(){
    const int length_a = 3;
    const int length_b = 2;
    const int length_c = length_a + length_b;
    int a[length_a] = {};
    int b[length_b] = {};
    int c[length_c] = {1,2,3,4,5};
    split(a,length_a,b,length_b,c,length_c);
    // for(int x: a) std::cout<< x << " "; 
    // for(int x: b) std::cout<< x << " "; 
    for(int x: c) std::cout<< x << " "; 

    return 0;

}