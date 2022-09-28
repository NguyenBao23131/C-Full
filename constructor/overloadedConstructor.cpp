#include <iostream>

class Pizza{
    public:
        std::string toping;

    Pizza(std::string toping){
        this->toping = toping;
    }
};

int main(){
    // overload the constructor = multiple constructor w/ the same but different parameter types allows for varying arguments when instantiating an object
    Pizza pizza1("per");

    std::cout << "Pizza constructor with different parameter types" << pizza1.toping << std::endl;
    system("pause");
    return 0;
}