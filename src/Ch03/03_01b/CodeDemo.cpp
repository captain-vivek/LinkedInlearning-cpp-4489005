// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>


enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    
    my_cow.name = "bella";
    my_cow.age=5;
    my_cow.purpose = cow_purpose::dairy;

    std::cout << "my cow purpose is of "<<(int)my_cow.purpose<<std::endl;
    std::cout<<"my cow name is"<<my_cow.name<<std::endl;
    std::cout<<"my cow age is"<<my_cow.age<<std::endl;
    return (0);
}
