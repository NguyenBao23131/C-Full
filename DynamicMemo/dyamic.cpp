#include <iostream>

int main(){
    // dynamic Memory allocation= memory that is allocated after the program is executed(compiled and running). using new operator to allocated memory in the heap rather than the stack

    int *pNum = NULL;

    pNum = new int;

    *pNum = 120;

    std::cout << "NumberT   likely to be allocated: " << *pNum << std::endl;
    std::cout << "Address: " << pNum << std::endl;
    delete pNum;
    return 0;
}