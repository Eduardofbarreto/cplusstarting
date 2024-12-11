#include <iostream>

int main(){

    float raio, circ, area, pi;

    std::cout<<"Digite o valor do raio: ";
    std::cin>>raio;

    pi = 3.14159;

    area = pi * (raio * raio);

    circ = 2 * pi * raio;

    std::cout<<"O resultado da area e: "<<area<<std::endl;
    std::cout<<"O resultado da circunferencia e: "<<circ<<std::endl;

}