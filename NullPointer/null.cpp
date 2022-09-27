#include <iostream>

int main(){
    // NULL value = a specified value that mean something has no value when a pointer is holding a NULL value that pointer is not pointing at anything
    int *pointer = nullptr;
    int x = 121;
    // pointer = &x;
    if(pointer == nullptr){
        std::cout << "Address was not located" << std::endl;
        std::cout << *pointer << std::endl;
    }else{
        std::cout << "Address was located" << std::endl; 
    }
    return 0;
}