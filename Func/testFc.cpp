#include<iostream>

double square(double length){
    return length*length;
}

std::string resultName(std::string string1, std::string string2){
    return string1+string2;
}

int main(){
    double length = 12.5;
    double result = square(length);
    std::string firstName = "Bao";
    std::string lastName = "Nguyen";
    std::string resultString = resultName(firstName, lastName);
    std::cout << result << std::endl;
    std::cout << resultString << std::endl;
    return 0;
}