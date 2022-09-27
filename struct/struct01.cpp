#include <iostream>

struct Student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
    Student student1;
    student1.name = "EllySa";
    student1.gpa = 4.0;
    student1.enrolled = true;

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;

    return 0;
}