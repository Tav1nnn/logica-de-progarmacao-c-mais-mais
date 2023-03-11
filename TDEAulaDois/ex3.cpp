#include <iostream>//biblioteca de entrada e saida
#include <math.h>//biblioteca com operações matematicas

using namespace std; //para não precisar ultilizar std na frente do cout

int main (){ //função principal iniciada quando execulta o código

    int segundos, minutos, horas, segundosUser;//declaração das variaveis necessarias

    cout<<"Digite a quantidade de segundos: ";//indicando para o usuario digitar os segundos

    cin>>segundosUser;//salvando os segundos

    horas = segundosUser/3600;//calculando as horas
    segundos = segundosUser%3600;//descobrindo o restante em segundos
    minutos = segundos/60;//achando os minutos
    segundos = segundos%60;//descobrindo os segundos
   
    cout<<"São "<<horas<<" hora, "<<minutos<<" minutos e "<<segundos<<" segundos";//mostrando para o usuario    
    return 0; //retorna zero para significar que o código deu certo
}
