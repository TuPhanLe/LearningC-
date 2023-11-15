/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 13 ****************************
********************** vunguyencoder.com **************************************

[Đề bài] Hoàn thành source code cho trước sau để xây dựng một Struct quản lý person.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

struct Person
{
	Person(string name)
	{
		fullName = name;
		next = NULL;
	}
	string fullName;
	Person* next;
};

struct PersonList
{
	Person* head = NULL;
// 1 - Hàm print_all() in ra toàn bộ Person trong danh sách
	void print_all()
	{
        int i = 0;
        for(Person* p = head; p != NULL; p = p->next ){
            std::cout << i << " - " << p->fullName<<"\n";
            i++;
        }
	}
// 2 - Hàm append() thêm 1 person vào cuối danh sách
	void append(Person *person)
	{
        // Noi dung can hoan thanh
        Person* p = head;
        if(p == NULL){
            head = person;
            return;
        }
        while(p->next != NULL) p = p->next; 
        p->next= person;
	}
// 3 - Hàm insert() chèn thêm 1 Peson vào vị trí cho trước trong danh sách
	void insert(Person *person, int position)
	{
        // Noi dung can hoan thanh
        if(position < 0) std::cout << "Out of range";
        if(position == 0){
            person->next = head;
            head = person;
            return;
        }
        int i = 1; 
        Person* backPerson = head;
        Person* frontPerson = backPerson->next;
        while(frontPerson != NULL){
            if(i == position){
                backPerson->next = person;
                person->next = frontPerson;
                return;
            }
            backPerson = frontPerson;
            frontPerson = frontPerson->next;
            i++;            
        }

	}
// 4 - Hàm remove() xóa 1 Person tại vị trí cho trước. 
	void remove(int position)
	{
        // Noi dung can hoan thanh
        if(position < 0) std::cout << "Out of range";
        if(position == 0){
            Person* fakePerson = head; 
            head = head->next;
            free(fakePerson);
            return;
        }
        int i = 1; 
        Person* backPerson = head;
        Person* frontPerson = backPerson->next;
        while(frontPerson->next != NULL){
            if(i == position){
                backPerson->next = frontPerson->next;
                return;
            }
            backPerson = frontPerson;
            frontPerson = frontPerson->next;
            i++;            
        }
	}
};

int main()
{
	// Create some person
	Person *vu = new Person("Nguyen Anh Vu");
	Person *eimi = new Person("Eimi Fukada");
	Person *ozawa = new Person("Maria Ozawa");
	Person *nobita = new Person("Nobita");
	Person *xuka = new Person("Xuka");
	PersonList *list = new PersonList;

	// Test 1:
	{
		cout << "Test 1 - Them 5 nguoi\n";
		list->append(vu);
		list->append(eimi);
		list->append(ozawa);
		list->append(nobita);
		list->append(xuka);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 2
	Person *hara = new Person("Yui Hara");
	{
		int pos = 2;
		cout << "Test 2 - Chen vao vi tri " << pos << "\n";
		list->insert(hara, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 3
	{
		int pos = 1;
		cout << "Test 3 - Xoa vi tri " << pos << "\n";
		list->remove(pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 4
	Person *doremon = new Person("Doremon");
	{
		int pos = 0;
		cout << "Test 4 - Chen vao vi tri " << pos << "\n";
		list->insert(doremon, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 5
	Person *dekhi = new Person("Dekhi");
	{
		int pos = 5;
		cout << "Test 5 - Chen vao vi tri " << pos << "\n";
		list->insert(dekhi, pos);
		list->print_all();
		cout << "-------------------------\n";
	}

	// Test 6
	{
		int pos1 = 0;
		int pos2 = 5;
		cout << "Test 6 - Xoa vi tri " << pos1 << " va " << pos2 << "\n";
		list->remove(pos1);
		list->remove(pos2);
		list->print_all();
		cout << "-------------------------\n";
	}

	return 0;
}





