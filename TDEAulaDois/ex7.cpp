#include <iostream>//biblioteca de entrada e saidad de dados

using namespace std;//para não ultilizar std na frente dos cout

int main() {//função principal 

    float valor1, valor2, valor3, valor4, media;//variaveis necessarias

    //informando o usuario para digitar os valores e salvando em variavel
    cout<<"Digite a valor 1: ";
    cin>>valor1;
    cout<<"Digite a valor 2: ";
    cin>>valor2;
    cout<<"Digite a valor 3: ";
    cin>>valor3;
    cout<<"Digite a valor 4: ";
    cin>>valor4;

    media = (1*valor1 + 2*valor2 + 3*valor3 + 4*valor4)/1+2+3+4; // calculando a media ponderada

    cout<<"Media "<<media;//mostrando a media

    return 0;//se retornar zero significa sulcesso na execulção
}