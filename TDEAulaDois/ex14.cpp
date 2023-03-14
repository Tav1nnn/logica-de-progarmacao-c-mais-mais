#include <iostream>//biblioteca necessario para entrada e saida de dados
#include <math.h>//biblioteca de operações matematicas

using namespace std;//para nãp precisar ultilizar o std antes do cout

int main () {//funão principal do código

    int valor;//variavel necessaria

    cout<<"Digite o valor: ";//pedindo para o usuario digitar o valor
    cin>>valor;//salvando o valor

    cout<<"Quadrado: "<<pow(valor,2)<<endl;//calculando o seu quatrado
    cout<<"Raiz quadrada: "<<sqrt(valor);//calculando sua raiz

    return 0;//se retornar zero deu bom
}