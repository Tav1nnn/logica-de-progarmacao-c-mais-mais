#include <iostream>//biblioteca padão para entrada e saidad de dados

using namespace std;//necessário para não precisar usar std antes do cout

int main () {//função principal do código

    int hora, minuto, segundo, segundosConvertido;//variaveis necessarias

    //soliciatando os valores e salvando eles na suas respectivas variaveis
    cout<<"Digite as horas: ";
    cin>>hora;
    cout<<"Digite os minutos: ";
    cin>>minuto;
    cout<<"Digite os segundos: ";
    cin>>segundo;

    segundosConvertido = (hora*3600)+(minuto*60)+segundo;//convertendo para segundo

    cout<<"Segundos: "<<segundosConvertido;//mostrando 

    return 0;//se retornar zero a funão fou sucedida
}