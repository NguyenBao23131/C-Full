#include <iostream>
void print(std::string name, int age){
    std::cout << name << " " << age << std::endl;
}

int main(){
    // const parameter = parameter that is effectively ignored read only code is more secure & convenient to usefull for reference and pointer analysis
    std::string name = "analysis";
    int age = 30;
    print(name, age);
    return 0;
}