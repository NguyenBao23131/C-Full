#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    int random_number = rand() % 5 + 1;
    switch(random_number) {
        case 1:
            std::cout << "Maria Ozawa" << std::endl;
            break;
        case 2:
            std::cout << "Yua mikami" << std::endl;
            break;
        case 3:
            std::cout << "Eimi Fukada" << std::endl;
            break;
        case 4:
            std::cout << "Ishita Kita" << std::endl;
        case 5:
            std::cout << "Ishihara" << std::endl;
            break;
    }
    return 0;
}