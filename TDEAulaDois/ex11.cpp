#include <iostream>//biblioteca padrão de entrada e saida de dados

using namespace std;//para não precisar usar std antes do cout

int main () {//função principal do código

    float tempo, velocidadeMedia, distancia, combustivel; //variaveis necessarios

    cout<<"Tempo gasto na viagem: ";//indicando o valor que o usuario deve digitar
    cin>>tempo;//salvando o valor digitado

    cout<<"Velocidade media: ";//incidcando o valor que o usario de digitar
    cin>>velocidadeMedia;//salvando o valor

    distancia = tempo*velocidadeMedia;//calculando a distancia 

   combustivel = distancia/16;//caculando o combustivel gasto

    cout<<"Combustivel gasto: "<<combustivel;//mostrando para o usuario

    return 0;//se retornar zero seguinifica que deu certo
}