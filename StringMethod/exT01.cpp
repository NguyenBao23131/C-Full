#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name:" << std::endl;
    std::getline(std::cin, name);

    name.length() > 12 ? std::cout << "Your name is too long" << std::endl : std::cout <<"Welcom to "<< name << std::endl;
    // name.clear();
    // std::cout << "Hello"<< name << std::endl;
    name.append("@gmail.com");
    std::cout << "Username: " << name << std::endl;
    std::cout << "Name at: "<< name.at(1) << std::endl;
    std::cout << name.insert(0, "Hello") << std::endl;
    std::cout << name.find("@gmail.com") << std::endl;
    std::cout << name.erase(0, 4) << std::endl;
    return 0;
}