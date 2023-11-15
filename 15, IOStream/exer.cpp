/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 13 ***************************
********************** vunguyencoder.com **************************************
[Đề bài]


*******************************************************************************/
#include <stdio.h>

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct Person
{
    string name;
    int age;
    float height;
    float weight;
    string nationality;
    int number;
};

int load_person(string filename, Person *person_list)
{
    std::ifstream input(filename);
    if(!input){
        std::cout<<"Can not access to file" << filename;
        return 0;
    }
    person_list->number = 0;
    string line;
    input.ignore();
    while(getline(input, line)){
        int pos = line.find("|");
        person_list->name = line.substr(0,pos);
        line = line.substr(pos+1);

        person_list->age = stoi(line.substr(0,pos));
        line = line.substr(pos+1);

        person_list->height = line.substr(0,pos);
        line = line.substr(pos+1);

        person_list->weight = stof(line.substr(0,pos));
        line = line.substr(pos+1);

        person_list->nationality = line.substr(0,pos);
        line = line.substr(pos+1);      

        person_list->number++;  
    }
    
    return person_list->number;
}

void add_person(string filename)
{

}

void print_persons(Person *person_list, int count)
{
    for(int i = 0; i < count; i++){
        std::cout<<person_list->name << "\n";
        std::cout<<person_list->age << "\n";
        std::cout<<person_list->height << "\n";
        std::cout<<person_list->weight << "\n";
        std::cout<<person_list->nationality << "\n";
        std::cout<<"===============\n";
    }
}

int main()
{
	const string filename = "Data.txt";
	const int MAX = 100;
	Person person_list[MAX];

	int count = load_person(filename, person_list);
	
	int command;
	cout << "Nhap lua chon (1 - Print / 2 - Add): ";
	cin >> command;
	if(command == 1)
	{
		print_persons(person_list, count);
	}
	else if(command == 2)
	{
		add_person(filename);
	}
}
