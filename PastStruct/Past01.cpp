#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void print(Car car){
    std::cout << std::endl;
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
    std::cout << std::endl;
}

int main(){
    Car car1;
    Car car2;

    car1.model = "Vin";
    car1.year = 2000;
    car1.color = "red";

    car2.model = "Mustang";
    car2.year = 2012;
    car2.color = "blue";
    print(car1);
    print(car2);
    return 0;
}