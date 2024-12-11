#include <iostream>
#include <cmath>

int main() {
    
    int a, a_q; b, b_q, c, c_q, soma;

    std::cout<<"Digite um valor para a: ";
    std::cin>>a;

    std::cout<<"Digite um valor para b: ";
    std::cin>>b;

    std::cout<<"Digite um valor para c: ";
    std::cin>>c;

    a_q = pow(a, 2);
    b_q = pow(b, 2);
    c_q = pow(c, 2);

    soma = a_q + b_q + c_q;

    std::cout<<"\nO resultado e: "<<soma<<std::endl;
    


    return 0;
}
