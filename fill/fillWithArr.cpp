#include <iostream>
#include <string>

int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like #" << i + 1 << std::endl;
        std::getline(std::cin, foods[i]);
    }

    std::cout << "You like the following food #" << std::endl;

    for(std::string food : foods){
        std::cout << food << std::endl;
    }
    return 0;
}