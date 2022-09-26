#include <iostream>
#include <ctime> 

int main(){
    int num, guest, tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "****** Number of tries" << std::endl;
    do{
        std::cout << "Guest your number" << std::endl;
        std::cin >> guest;
        if(guest > num){
            std::cout << "Too many tries" << std::endl;
        }else if(guest < num){
            std::cout << "Not enough tries" << std::endl;
        }else{
            std::cout << "Success" << std::endl;
        }
    }while(guest != num);
    std::cout << "***********************" << std::endl;
    return 0;
}