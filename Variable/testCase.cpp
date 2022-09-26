#include <iostream>

int myNumb = 3;
void display(){
    std::cout << myNumb << std::endl;
}

int main(){
    //local variables = declarations inside this a function or block
    //global variables = declarations outside this a function
    display();
    std::cout << myNumb << std::endl;
    return 0;
}