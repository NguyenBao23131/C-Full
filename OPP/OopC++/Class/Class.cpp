#include <iostream>

class Employee {
public:
    std::string Name, Company;
    int Age;

    void print() {
        std::cout << Name << " " << Company << std::endl;
        std::cout << Age << std::endl;
    }

    Employee(std::string name, std::string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("Bao", "Loser", 19);
    // employee1.Name = "JohnCasey";
    // employee1.Company = "Garena";
    // employee1.age = 20;

    employee1.print();

    Employee employee2 = Employee("Occho", "Loser",20);
    // employee2.Name = "Jan";
    // employee2.Company = "factorial";
    // employee2.age = 30;

    employee2.print();
    system("pause");
    return 0;
}