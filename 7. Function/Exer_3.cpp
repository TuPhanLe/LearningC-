/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 8.2 ***************************
********************** vunguyencoder.com **************************************

*******************************************************************************/

#include<iostream>

using namespace std;

float divide(int a, int b)
{

    if(b != 0){
        return float(a)/b;
    }else{
        cout<<"Khong the thuc hien phep chia cho ";
        return b;
    }
    
}

int main()
{
    cout << divide(6, 2) << "\n";
    cout << divide(-7, 2) << "\n"; 
    cout << divide(8, 0);
   
    return 0;
}


