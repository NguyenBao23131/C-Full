#include <iostream>
int main(){
    std::string x = "Koko";
    std::string y = "Kiri";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout <<"X: " << x << std::endl;
    std::cout <<"Y: " << y << std::endl;
    return 0;
}