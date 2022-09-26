#include <iostream>

int main(){
    int numb;
    std::cout << "Enter number of peripheral" << std::endl;
    std::cin >> numb;
    while(numb < 0){
        std::cout << "Enter number of peripheral" << std::endl;
        std::cin >> numb;
    }
    for(int i = 1; i <=  20; i++){
        if(i == 10){
            break;
        }
        std::cout << i << std::endl;
    }
    for(int i = 0; i <= 20; i++){
        for(int j = 0; j <= 15; j++){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}