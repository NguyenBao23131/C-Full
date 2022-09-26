#include<iostream>

int main(){
    int grade = 75;
    grade >= 60 ? std::cout<< "You passed" << std::endl : std::cout<< "You failed" << std::endl;

    int numb = 9;
    numb % 2 == 1 ? std::cout << "ODD" << std::endl : std::cout << "EVEN" << std::endl;
    return 0;
}