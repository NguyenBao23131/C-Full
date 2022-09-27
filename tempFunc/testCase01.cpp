#include <iostream>
template <typename T>
T max(T a, T b){
    return std::max(std::max(a, b), std::max(b, a));
}

int main(){
    std::cout << max(1, 2) << std::endl;
    std::cout << std::endl;
    return 0;
}