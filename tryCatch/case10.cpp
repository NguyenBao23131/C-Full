#include <iostream>

int main(){
    std::string name;
    try
    {
        name = "Bao";
        if(name == "Bao"){
            throw name;
        }

        name = "Linh";
        name = "Man";
    }catch(std::string name){
        std::cout << "Yeu anh " << std::endl;
    }
    std::cout << "Nguoi yeu toi: " << name << std::endl;
    system("pause");
    return 0;
}