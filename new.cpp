#include <iostream>
#include <cmath>  // Para usar a função pow()

int main() {
    float raio, volume;

    // Solicita ao usuário o valor do raio
    std::cout << "Digite o valor do raio: ";
    std::cin >> raio;

    // Calcula o volume da esfera
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    // Exibe o resultado
    std::cout << "O volume da esfera é: " << volume << " unidades cúbicas" << std::endl;

    return 0;
}
