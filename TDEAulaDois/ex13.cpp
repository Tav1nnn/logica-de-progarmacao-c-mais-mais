#include <iostream>//biblioteca padão para entrada e saidad de dados

using namespace std;//´para não precisar ultilizar std antes do cout

int main () { //funçaõ principal do código

    float valor, percentual, lucro;//variaveis necessarias

    cout<<"Valor de entrada: ";//solicitando para o usaurio digitar o valor
    cin>>valor;//salvando o valor na variavel
    cout<<"Percentual de lucro: ";//solicitando para que o usuario digite o valor
    cin>>percentual;//salvando o valor em uma variavel

    percentual = percentual/100; // calculando o percentual

    lucro = valor * percentual;//calculando o lucro

    cout<<"Voce ira lucrar: "<<lucro;//mostrando o lucro

    return 0;//se retornar zero foi sulcesso 
}