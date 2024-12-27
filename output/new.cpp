#include <iostream>

int main(){
    float metros, litros;

    std::cout<<"Quantos metros serao pintados?"<<std::endl;
    std::cin>>metros;

    litros = (metros/0.33);

    std::cout<<"Quantidade de metros e de: "<<metros<<std::endl;
    std::cout<<"Voce precisa de: "<<litros<<" de tinta."<<std::endl;

    return 0;
}

//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho 
//em metros quadrados da área a ser pintada.
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e 
//que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
//Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.