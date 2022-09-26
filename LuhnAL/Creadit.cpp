#include <iostream>

int getDigits(const int numb){
    return numb % 10 + (numb / 10 % 10);
}

int sumODD(const std::string cardNumb){
    int sum = 0;
    for(int i = cardNumb.size() - 1; i >= 0; i--){
        sum += cardNumb[i] - '0';
    }

    return sum;
}

int sumEVEN(const std::string cardNumb){
    int sum = 0;
    for(int i = cardNumb.size() - 2; i >= 0; i-=2){
        sum += getDigits((cardNumb[i] - '0')*2);
    }

    return sum;
}

int main(){
    std::string cardNumb;
    int result = 0;
    std::cout << "Enter cardNumber ###: " << std::endl;
    std::cin >> cardNumb;

    result = sumODD(cardNumb) + sumEVEN(cardNumb);
    if(result % 10 == 0){
        std::cout << cardNumb << "is valid" << std::endl;
    }else{
        std::cout << cardNumb << "is not invalid" << std::endl;
    }
    return 0;
}