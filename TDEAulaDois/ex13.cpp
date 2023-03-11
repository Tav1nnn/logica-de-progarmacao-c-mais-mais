#include <iostream>

using namespace std;

int main () { 

    float valor, percentual, lucro;

    cout<<"Valor de entrada: ";
    cin>>valor;
    cout<<"Percentual de lucro: ";
    cin>>percentual;

    percentual = percentual/100;

    lucro = valor * percentual;

    cout<<"Voce ira lucrar: "<<lucro;

    return 0;
}