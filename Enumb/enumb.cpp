#include <iostream>

enum Day{sunday = 0, monday = 1, tuesday = 2};

int main(){
    Day today = sunday;

    switch(today){
        case sunday: 
            std::cout << "Sunday" << std::endl;
            break;
        case monday: 
            std::cout << "Monday" << std::endl;
            break;
        case tuesday: 
            std::cout << "Tuesday" << std::endl;
            break;
    }
    return 0;
}