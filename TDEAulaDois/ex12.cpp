#include <iostream>

using namespace std;

int main () {

    int hora, minuto, segundo, segundosConvertido;

    cout<<"Digite as horas: ";
    cin>>hora;
    cout<<"Digite os minutos: ";
    cin>>minuto;
    cout<<"Digite os segundos: ";
    cin>>segundo;

    segundosConvertido = (hora*3600)+(minuto*60)+segundo;

    cout<<"Segundos: "<<segundosConvertido;

    return 0;
}