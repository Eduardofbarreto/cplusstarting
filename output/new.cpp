#include <iostream>

int main(){
    const float lata_metros = 18.00;
    const float area = 3.0;
    const float lata_valor = 80.00;
    float area_pintada;
    float litros_tinta;

    std::cout<<"Digite a area a ser pintada: "<<std::endl;
    std::cin>>area_pintada;

    litros_tinta = area_pintada / area;

    std::cout<<litros_tinta;

    return 0;
}

//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho 
//em metros quadrados da área a ser pintada.
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e 
//que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
//Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.