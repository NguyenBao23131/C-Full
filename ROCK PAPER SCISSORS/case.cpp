#include <iostream>
#include <ctime>
char getUserChoice(){
    char player;
    std::cout << "Rock paper scissors" << std::endl;
    do{
        std::cout <<"Chose another player" << std::endl;
        std::cout << "*******************" << std::endl;
        std::cout << "'r' for rock" << std::endl;
        std::cout << "'p' for paper" << std::endl;
        std::cout << "'s' for scissors" << std::endl;
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void show(char choice){
    switch(choice){
        case 'r':
            std::cout << "Rock " << std::endl;
            break;
        case 'p':
            std::cout << "Paper " << std::endl;
            break;
        case 's':
            std::cout << "Scissors " << std::endl;
            break;
    }
}

int main(){
    char player, computer;
    player = getUserChoice();
    std::cout << "You choice: " << std::endl; 
    show(player);

    computer = getComputerChoice();
    std::cout << "Computer: " << std::endl;
    show(computer);
    return 0;
}