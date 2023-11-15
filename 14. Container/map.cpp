 /* Map là một loại cấu trúc dữ liệu có khả năng tương tự Array nhưng đối với mỗi giá trị sẽ được gọi là key value -> key và value */
 // CRUD <-----> Create || Read || Delete || Update

#include <iostream>
#include <map>


int main(){
    
    std::map<int,std::string> person = {{1,"Phan Le Tuan Tu"}, {4, "Le Dong Khoa"}, {7,"Nguyen Hoang Viet"}};
    person[7] = "Nhu Y";                     //  Replace or Update
    person[100] = "Vu Thi Hoang Yen";       // Create
    person.erase(1);                        //Delete

    for(auto x: person) {                   // Read
       std::cout<<x.first<<"------"; 
       std::cout<<x.second<<"\n"; 
    }
    // std::cout<<m[1];
    
    return 0;

}