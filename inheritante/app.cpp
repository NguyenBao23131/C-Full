#include <iostream>

class Animal{
    public:
        bool alive = true;

    void eat(){
        std::cout << "This animal is eating" << std::endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog myDog;

    std::cout << "This dog is alive" << myDog.alive << std::endl;
    system("sleep");
    return 0;
}