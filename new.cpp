#include <iostream>
#include <cmath>  // Para usar a função pow()

int main() {
    
    float c, f;

    std::cout<<"Digite a temperatura em Celsius: ";
    std::cin>>c;

    f = (9 * c + 160)/5;

    std::cout<<"Essa é a temperatura em Celsius. "<<c<<std::endl;
    std::cout<<"Essa é a temperatura em Fahreinheit. "<<f<<std::endl;
    std::cout<<"\n"<<std::endl;

    return 0;
}
