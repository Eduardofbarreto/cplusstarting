#include <iostream>
#include <cmath>

int main() {
    
    float num1, num2;

    std::cout<<"Digite o primeiro numero: ";
    std::cin>>num1;

    std::cout<<"Digite o segundo numero: ";
    std::cin>>num2;

    if (num1 > num2){
        std::cout<<"O maior valor e: "<<num1<<std::endl;
    } else {
        std::cout<<"O maior valor e: "<<num2<<std::endl;
    }

    return 0;
}
