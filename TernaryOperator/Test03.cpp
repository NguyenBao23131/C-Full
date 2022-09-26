#include<iostream>
int main(){
    double temp;
    char unit;
    std::cout<< "********** Temperature **********" << std::endl;
    std::cout<< "F = Fahrenheit" << std::endl;
    std::cout<< "C = Celsius" << std::endl;
    std::cout<< "U want to convert temperature" << std::endl;
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<< "Enter a temperature unit" << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout<< "Temperature = " << temp << std::endl;
    }else if(unit == 'C' || unit == 'c'){
        std::cout<< "Enter a temperature unit" << std::endl;
        std::cin >> temp;

        temp = (temp - 32.0)/1.8;
        std::cout<< "Temperature = " << temp << std::endl;
    }


    std::cout<< "*********************************" << std::endl;
    return 0;
}