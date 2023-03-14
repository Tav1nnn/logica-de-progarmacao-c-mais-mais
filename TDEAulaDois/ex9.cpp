#include <iostream>//biblioteca padrão para entrada e saida de dados

using namespace std;//serva para não precisar ultilizar o std na frente do cout

int main () {//função principal do código

    float saldo, rendimento;//variaveis necessárias

    cout<<"Digite o valor do seu saldo: ";//informando o usuario para digitar o saldo
    cin>>saldo;//salvando o saldo na variavel

    rendimento = (saldo*0.11);//calculando o rendimento de 11%

    cout<<"rendimento: "<<rendimento;//mostrando o rendimento

    return 0;//se returnar 0 significa sulcesso no código
}