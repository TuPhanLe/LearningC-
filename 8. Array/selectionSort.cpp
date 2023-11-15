/* The idea of selection sort is find the min or max position at first index into all of array
    After that, swap the position

*/
#include <iostream>
const int length = 6;
int findMinIndex(int a[],int index){
    int minIndex = index;
    for(int i = minIndex; i<length; i++)
    {
        if(a[i]<a[minIndex]) minIndex = i;
    }
    return minIndex;
}
void swapPosition(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a[length] = {2,3,5,15,1,7};
                //   0 1 2 3 4 5

    for(int i = 0; i< length; i++){
        swapPosition(a[i],a[findMinIndex(a,i)]);
    }
    for(int x:a) std::cout<<x<<" ";
    

}