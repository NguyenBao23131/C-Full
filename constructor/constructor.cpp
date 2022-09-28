#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){
    // constructor = special method that is automatically called when an object is instantiated usefull for assigning values to attributes as arguments
    Student student1("Beab", 24, 3.2);
    Student student2("Mone", 25, 2.9);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.age << std::endl;
    std::cout << student2.gpa << std::endl;
    system("pause");
    return 0;
}