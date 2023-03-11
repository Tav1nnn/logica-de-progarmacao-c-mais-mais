#include <iostream>//biblioteca de entrada e saidad de dados

using namespace std;//para não ultilizar std na frente dos cout

int main() {//função principal 

    float chuvaPolegadas, chuvaMilimetros;//variaveis necessarias

    cout<<"Digite a quantidade de chuva em polegadas: ";//indicando ao usuario o valor que deve ser digitado
    cin>>chuvaPolegadas;//salvando esse valor na variavel

    chuvaMilimetros = chuvaPolegadas*25.4;//fazendo a conversão 

    cout<<"Chuva em milimetros: "<<chuvaMilimetros;//mostrando na tela

    return 0;//se retornar zero significa sulcesso na execulção
}