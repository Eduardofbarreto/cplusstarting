#include <iostream>
#include <cmath>

int main() {
    
    float litros, km, media;

    std::cout<<"Digite a quilometragem do veículo: ";
    std::cin>>km;

    std::cout<<"Digite a quantidade de litros abastecida: ";
    std::cin>>litros;


    media = (km/litros);

    std::cout<<"A media do veículo e de: "<<media<<" km/l."<<std::endl;

    return 0;
}
