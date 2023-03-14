#include <iostream>//biblioteca de entrada e saida
#include <math.h>//biblioteca com operações matematicas

using namespace std; //para não precisar ultilizar std na frente do cout

int main (){ //função principal iniciada quando execulta o código

    float const pi = 3.14; //constante do pi
    float raio, area;//variaveis restantes

    cout<<"Digite o raio do cículo: ";//solicitando o valor
    cin>>raio; //salvando o valor

    area = pi*pow(raio,2);//cauculando a area 

    cout<<endl<<"Area: "<<area;//mostrando a area
    
    return 0; //retorna zero para significar que o código deu certo
}
