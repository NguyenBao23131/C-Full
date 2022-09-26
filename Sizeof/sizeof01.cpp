#include <iostream>

int main(){
    // sizeof() = determine the size int bytes of the a buffer
    std::string name = "NguyenBao";
    int arr[] = {1,2,3,4,5};
    char buffer = 'F';
    bool result = false;
    std::string students[] = {"John","Marry", "Ann"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << std::endl;
    }
    std::cout << sizeof(arr) << std::endl;
    std::cout << sizeof(name) << std::endl;
    std::cout << sizeof(buffer) << std::endl;
    std::cout << sizeof(result) << std::endl;
    return 0; 
}