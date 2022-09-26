#include <iostream>

int main(){
    std::string name = "Loser";
    std::string *path = &name;

    std::cout << *path << std::endl;
    return 0;
}