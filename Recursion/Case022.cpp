#include <iostream>

void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step ! " << std::endl;
        walk(steps - 1);
    }
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}

int main(){
    walk(100);

    std::cout << factorial(10) << std::endl;
    return 0;
}