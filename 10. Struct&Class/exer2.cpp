#include <iostream>
#include <string>
#include <algorithm>
struct Book{
    int ID;
    std::string title;
};
void ParseData (std::string InputData, Book book[], int* lastIndex)
{
    int index = InputData.find('|');
    while(index != std::string::npos)
    {
        book[*lastIndex].title = InputData.substr(0,index);
        InputData = InputData.substr(index+1);
        index = InputData.find('|');
        (*lastIndex)++;
    }
    book[*lastIndex].title = InputData;
    (*lastIndex)++;
    for(int i = 0; i < *lastIndex; i++){
        int position = book[i].title.find(';');
        book[i].ID = stoi(book[i].title.substr(0,position));
        book[i].title = book[i].title.substr(position+1);
    }


}
/* 1 - program_1(Book* book1, Book* book2) hoặc program_1(Book& book1, Book& book 2)
    Input: Pointer hoặc reference của dữ liệu nhập vào
    Output: void
    Thực hiện hoán đổi nội dung của 2 biến cho nhau.
*/
void program_1(Book& book1, Book& book2)
{
    Book temp = book1; 
    book1 = book2;
    book2 = temp;
}
void program_1(Book* book1, Book* book2)
{
    
    if(book1 && book2){
        int id = book1->ID;
        std::string title = book1->title;
        book1->ID = book2->ID;
        book1->title = book2 ->title;
        book2->ID = id;
        book2->title = title;
    }

}
/*2 - program_2(Book books[], int length)
Input: array dữ liệu nhập vào
Output: Tên của sách có tựa đề dài nhất. Nếu có nhiều sách cùng có độ dài lớn nhất thì chỉ in ra cuốn có ID bé nhất.*/
std::string program_2(Book books[], int length){
    int max = 0;
    int position = 0; 
    for(int i = 0; i < length; i++){
        if(max <= books[i].title.length()){
            max = books[i].title.length();
            position = i;
        } 
    }
    for(int i = 0; i < length; i++){
        if(max == books[i].title.length()){
            if(books[i].ID > books[position].ID)  position = i;
           
        } 
    return books[position].title;
    }
}
/*3 - program_3(Book books[], int length)
Input: array dữ liệu nhập vào
Output: Độ dài trung bình của các tựa đề sách*/
int program_3(Book books[], int length)
{
    int average = 0;
    for(int i = 0; i < length; i++){
        average += books[i].title.length();
    }
    average/=(length+1);
}
/*4 - program_4(Book books[], int length)
Input: array dữ liệu nhập vào
Output: void
Sắp xếp danh sách tựa đề các cuốn sách theo thứ tự từ điển*/
bool so_sanh_sach(Book& book_1, Book& book_2)
{
	return book_1.title < book_2.title;
}

void  program_4(Book books[], int length)
{
    std::sort(books, books + length, so_sanh_sach);
	for (int i = 0; i < length; i++)
	{
		std::cout << " | " << books[i].ID << " - " << books[i].title << " | " ;
	}
}

int main()
{
    Book book[100];
    int lastIndex = 0;
    std::string InputData = "1023;Dac nhan tam|8873;Bay vien ngoc rong|2372;Cha giau cha ngheo|900;Tham tu lung danh Conan|155;Tay Du Ky|231;Hong Lau Mong";
    ParseData(InputData,book,&lastIndex);
    program_4(book, lastIndex);
    
    return 0;
}