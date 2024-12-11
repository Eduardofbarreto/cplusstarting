#include <iostream>

int main() {
    
    float c, f;

    std::cout<<"Digite a temperatura em Fahreinheit: ";
    std::cin>>f;

    c = 0.555555 * (f-32);

    std::cout<<"\nO resultado em Ceusius e: "<<c<<std::endl;
    std::cout<<"\n"<<std::endl;

    return 0;
}
