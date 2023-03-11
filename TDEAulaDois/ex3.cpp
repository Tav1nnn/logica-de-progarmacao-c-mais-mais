#include <iostream>
#include <math.h>

using namespace std; 

int main (){ 

    int segundos, minutos, horas, segundosUser;

    cout<<"Digite a quantidade de segundos: ";

    cin>>segundosUser;

    horas = segundosUser/3600;
    segundos = segundosUser%3600;
    minutos = segundos/60;
    segundos = segundos%60;
   
    cout<<"São "<<horas<<" hora, "<<minutos<<" minutos e "<<segundos<<" segundos";    
    return 0; 
}
