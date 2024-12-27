#include <iostream>

int main(){
    float sal, horas, imposto, inss, sindicato, sal_bruto, sal_liq, desc;

    std::cout<<"Digite o valor que voce ganha por hora: ";
    std::cin>>sal;

    std::cout<<"Digite quantidade de horas trabalhadas: ";
    std::cin>>horas;

    sal_bruto = sal * horas;

    imposto = sal * 0.11;

    inss = sal * 0.08;

    sindicato = sal * 0.05;

    desc = imposto + inss + sindicato;

    sal_liq = sal_bruto - desc;

    std::cout<<"Seu salario bruto e de: R$ "<<sal_bruto<<std::endl;
    std::cout<<"O valor do seu IR e de: R$ "<<imposto<<std::endl;
    std::cout<<"O valor do INSS e de: R$ "<<inss<<std::endl;
    std::cout<<"O valor do sindicato e de: R$ "<<sindicato<<std::endl;
    std::cout<<"O salario liquido e de: R$ "<<sal_liq<<std::endl;
}

