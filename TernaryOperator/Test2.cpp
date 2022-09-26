#include <iostream> 

int main(){
    int temp;
    bool sunny = false;
    std::cout << "Enter a temperature: ";
    std::cin >> temp;
    temp > 0 && temp < 100 ? std::cout << "Temperature is " << temp << std::endl : std::cout << "Temperature is " << 100 << std::endl;
    !sunny ? std::cout << "Not good" << std::endl : std::cout << "very good" << std::endl;
    return 0;
}