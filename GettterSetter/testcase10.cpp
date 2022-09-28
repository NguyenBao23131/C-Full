#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
        int getTemperature(){
            return temperature;
        }

        void setTemperature(int temperature) {
            this->temperature = temperature;
        }
};

int main(){

    // getter = function that make a private attributes Readable
    // setter = function that make a public attributes writable

    Stove temp;
    temp.setTemperature(100);

    std::cout << temp.getTemperature() << std::endl;
    system("pause");
    return 0;
}