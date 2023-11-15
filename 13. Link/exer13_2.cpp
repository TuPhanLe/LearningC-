
/*******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 13.2 ****************************
********************** vunguyencoder.com **************************************

Biết một gia phả được mô tả như hình vẽ, trong đó liên kết mũi tên là quan hệ bố mẹ - con cái (Ví dụ Vu ---> Son Tung MTP tức là Vu là cha của Son Tung MTP)
Cho một struct Person gồm trường thông tin và con trỏ tới các con cái. Hoàn thiện các phần code sau 
1. Tạo liên kết cho các biến được cấp phát động ở hàm main theo sơ đồ gia phả trên.
2. Viết hàm print_children() in ra tên các con của một người trong gia phả
3. Viết hàm check_shared_children() kiểm tra xem 2 người có con chung hay ko 
4. Viết hàm print_grandchildren() in ra tên các cháu của một người trong gia phả

* ******************************************************************************/


#include <iostream>
#include <string>

using namespace std;

const int MAX_OF_CHILDREN = 3;

struct Person
{
    Person(string name)
    {
        fullname = name;
        for(int i = 0; i < MAX_OF_CHILDREN; i++)
        {
            children[i] = NULL;
        }
    }
    
    string fullname;
    Person* children[MAX_OF_CHILDREN];
};

void print_children(Person* person)
{
    // Noi dung can hoan thanh 
    bool check = false;
    for(int i = 0; i < MAX_OF_CHILDREN; i++)
    {
        if((person->children[i] != NULL) && check == true){
            std::cout<< ", "<< person->children[i]->fullname;
        }
        if((person->children[i] != NULL) && check == false){
            std::cout<< person->fullname << " co con la " << person->children[i]->fullname;
            check = true;
        }
    }
    if(check == 0)
    {
        std::cout<< person->fullname << " chua co con ";
    }
}

bool check_shared_children(Person* person_1, Person* person_2)
{
    // Noi dung can hoan thanh 
    for(int i = 0; i < MAX_OF_CHILDREN; i++){
        if((person_1->children[i] != NULL) || (person_2->children[i] != NULL)){
            if(person_1->children[i] == person_2->children[i]){
                return true;
            }
        }
    }   return false;
}

void print_grandchildren(Person* person)
{
    string chau = "";
    bool first = false; 
    for(int i = 0; i < MAX_OF_CHILDREN; i++){
        if(person->children[i] != NULL){
            for(int j = 0; j < MAX_OF_CHILDREN; j++)
            {
                if(person->children[i]->children[j] != NULL){
                    if(first == true) {
                        chau = chau+ ", "+person->children[i]->children[j]->fullname;   
                    }
                    if(first == false){
                        chau = person->children[i]->children[j]->fullname;
                        first = true;
                    }
                }
                
            }first = false;
        }
    }
    if(chau == "") std::cout<<person->fullname<< " khong co chau";
    else std::cout<<person->fullname<<" co chau la "<<chau;
}

int main()
{
    Person *vu = new Person("Anh Vu");
    Person *yen = new Person("Thi Yen");
    Person *mtp = new Person("Son Tung MTP");
    Person *bao_tram = new Person("Thieu Bao Tram");
    Person *ngoc_trinh = new Person("Ngoc Trinh");
    Person *khac_tiep = new Person("Khac Tiep");
    Person *ozawa = new Person("Ozawa");
    Person *tokuda = new Person("Tokuda");
    
    {
       // Noi dung cau 1 can hoan thanh 
        vu->children[0] = mtp;
        yen->children[0] = mtp;
        mtp->children[0] = tokuda;
        mtp->children[1] = ozawa;
        ngoc_trinh->children[0] = bao_tram;
        khac_tiep->children[0] = bao_tram;
        bao_tram->children[0] = tokuda;
        bao_tram->children[1] = ozawa;
    }
    
    {
        cout << "Test 1 - In ten con: \n";
        cout << "\n\t"; print_children(vu);
        cout << "\n\t"; print_children(mtp);
        cout << "\n\t"; print_children(yen);
        cout << "\n\t"; print_children(khac_tiep);
        cout << "\n\t"; print_children(bao_tram);
        cout << "\n\t"; print_children(ozawa);        
        cout << "\n\t"; print_children(tokuda);
    }
    
    {
        cout << "\nTest 2 - Kiem tra con chung: \n";
        cout << "\tTest 2.1: " << (check_shared_children(vu, yen) == true ? "Pass" : "Failed") << "\n";
        cout << "\tTest 2.2: " << (check_shared_children(vu, ngoc_trinh) == false ? "Pass" : "Failed") << "\n";
        cout << "\tTest 2.3: " << (check_shared_children(mtp, bao_tram) == true ? "Pass" : "Failed") << "\n";
    }
    
    {
        cout << "\nTest 3 - In ten chau: \n";
        cout << "\n\t"; print_grandchildren(vu);
        cout << "\n\t"; print_grandchildren(ngoc_trinh);
        cout << "\n\t"; print_grandchildren(bao_tram);
        cout << "\n\t"; print_grandchildren(ozawa);
    }

}






