#include <iostream>
#include<cmath>
int main(){
    double a, b, c;
    std::cout << "Enter a and b: ";
    std::cin >> a >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c= sqrt(a+b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    return 0;
}