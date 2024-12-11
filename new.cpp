#include <iostream>

int main(){

using namespace std;

    int num1, num2, num3, soma, subt, mult;

    cout<<"Digite um valor para num1: ";
    cin>>num1;

    cout<<"Digite um valor para num2: ";
    cin>>num2;

    cout<<"Digite um valor para num3: ";
    cin>>num3;

    soma = num1 + num2 + num3;
    subt = num1 - num2 + num3;
    mult = num1 * num2 + num3;

    cout<<"\nO resultado da soma e: "<<soma<<endl;
    cout<<"O resultado da subtracao e: "<<subt<<endl;
    cout<<"O resultado da multiplicacao e: "<<mult<<endl;

}