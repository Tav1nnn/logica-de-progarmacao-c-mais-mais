#include <iostream>//biblioteca padão de entrada e saida de dados

using namespace std;//para não precisar usar std antes do cout

int main () {//função principal a ser execultada no código

    float preco, desconto, percentual;//variaveis necessarias

    cout<<"Digite o valor da compra: ";//informando o usuario do que deve digitar
    cin>>preco;//salvando o valor em uma variavel 

    cout<<"Digite o valor do desconto: ";//informando o usuario do que deve digitar
    cin>>desconto;//salvando o valor em uma variavel 

    percentual = (100*desconto)/preco;//calculando o desconto

    cout<<"percentual de desconto: "<<percentual<<"%";//mostrando o desconto

    return 0;//se reotrnar zero o código deu certo
}