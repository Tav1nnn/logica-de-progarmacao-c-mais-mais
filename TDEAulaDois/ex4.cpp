#include <iostream>//biblioteca de entrada e saida
#include <math.h>//biblioteca com operações matematicas

using namespace std; //para não precisar ultilizar std na frente do cout

int main (){ //função principal iniciada quando execulta o código
    
    //variaveis necessarias    
   float quilowats, valor;
   float const salarioMinimo = 1320.00;
   //valor base do quilowats
   float valorBase = salarioMinimo/6;
    
    cout<<"Digite a os quilowats: ";//indicando para o usuario digitar
    cin>>quilowats;//salvando o valor digitado
    
    valor = (quilowats/300)*valorBase;//calculando
    
    cout<<"Valor da conta: "<<valor;//mostrando valor
    
    return 0; //retorna zero para significar que o código deu certo
}
