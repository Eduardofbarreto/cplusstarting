#include <iostream>
#include <cmath>

int main() {
    
   int cod;
   float qtd, valor, total;

   std::cout<<"Digite o codigo da peca: ";
   std::cin>>cod;

   std::cout<<"Digite o valor da peca: ";
   std::cin>>valor;

   std::cout<<"Digite q quantidade de pecas: ";
   std::cin>>qtd;

   total = qtd * valor;

   std::cout<<"\nVoce comprou a peca de codigo: "<<cod<<std::endl;
   std::cout<<"Voce comprou "<<qtd<<"!"<<std::endl;
   std::cout<<"Valor total de: "<<total<<std::endl;

   return 0;
}
