#include <iostream>
#include <math.h>

using namespace std;

int main (){
    
    float lado, area;
    
    cout<<"Digite o valor do lado do triângulo equilátero: ";
    cin>>lado;
    
    area = (pow(lado,2)*sqrt(3))/4;
    
    cout<<endl<<"Area: "<<area<<"m²";
    
    return 0;
}