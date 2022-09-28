#include <iostream>

class Human{
    public:
        std::string name;
        std::string description;
        int age;

        void eat(){
            std::cout << "this person is eating " << std::endl;
        }

        void drink(){
            std::cout << "this person is consuming " << std::endl;
        }

        void fucking(){
            std::cout << "This person is already" << std::endl;
        }
};

int main(){
    Human human1;

    human1.name = "Eimi Fukada";
    human1.description = "A actor with JAV";
    human1.age = 20;

    std::cout << human1.name << std::endl;
    std::cout << human1.description << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();
    human1.drink();
    human1.fucking();
    return 0;
}