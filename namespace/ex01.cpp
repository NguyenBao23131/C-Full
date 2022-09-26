#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 10;
}

int main(){
    int x = 0;
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    return 0;
}
