#include <iostream>

int main(){
    std::string name = "Alone";
    int age = 21;
    bool student = true;
    
    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;
    return 0;
}