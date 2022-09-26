#include <iostream>

int main(){
    std::string foods[50];
    fill(foods, foods + 50, "Pizza");
    for(std::string food : foods){
        std::cout << food << std::endl;
    }
    return 0;
}