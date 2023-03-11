#include <iostream>//biblioteca de entrada e saida

using namespace std;//para não precisar ultilzar std na frente do cout

int main () {

    float nota1, nota2, nota3, nota4, media;//variaveis necessarias

    //informando o usuario para digitar as notas e salvando em variavel
    cout<<"Digite a nota 1: ";
    cin>>nota1;
    cout<<"Digite a nota 2: ";
    cin>>nota2;
    cout<<"Digite a nota 3: ";
    cin>>nota3;
    cout<<"Digite a nota 4: ";
    cin>>nota4;

    media = (nota1+nota2+nota3+nota4)/4;//calculando a media

    cout<<"Media: "<<media;//mostrando a media

    return 0;//se retornar 0 significa que o codigo deu certo
}