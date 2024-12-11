#include <iostream>

int main(){

    float num1, num2, num3, soma, subt, mult, div;

    std::cout<<"Digite um valor para num1: ";
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: ";
    std::cin>>num2;

    std::cout<<"Digite um valor para num3: ";
    std::cin>>num3;

    //Bloco de resoluções
    soma = num1 + num2 + num3;
    subt = num1 - num2 - num3;
    mult = num1 * num2 * num3;
    div = num1 / num2 / num3;

    std::cout<<"\nO resultado da soma e: "<<soma<<std::endl;
    std::cout<<"O resultado da subtracao e: "<<subt<<std::endl;
    std::cout<<"O resultado da multiplicacao e: "<<mult<<std::endl;
    std::cout<<"O resultado da divisao e: "<<div<<std::endl;

}