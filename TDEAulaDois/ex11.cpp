#include <iostream>

using namespace std;

int main () {

    float tempo, velocidadeMedia, distancia, combustivel;

    cout<<"Tempo gasto na viagem: ";
    cin>>tempo;

    cout<<"Velocidade media: ";
    cin>>velocidadeMedia;

    distancia = tempo*velocidadeMedia;

    combustivel = distancia/16;

    cout<<"Combustivel gasto: "<<combustivel;

    return 0;
}