#include <iostream>
#include <cmath>  // Para usar a função pow()

int main() {
    
    float Base, base, altura, area;

    std::cout<<"Digite a base: ";
    std::cin>>Base;

    std::cout<<"Digite a base baixa: ";
    std::cin>>base;

    std::cout<<"Digite a altura: ";
    std::cin>>altura;

    area = (Base + base)/2 * altura;

    std::cout<<"A area e: "<<area<<std::endl;

    return 0;
}
