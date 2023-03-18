#include <iostream>

using namespace std;

int main () {

    float a,b,c,d,e, maior;

    cout<<"Digite o valor A: ";
    cin>>a;    
    cout<<"Digite o valor B: ";
    cin>>b;
    cout<<"Digite o valor C: ";
    cin>>c;
    cout<<"Digite o valor D: ";
    cin>>d;
    cout<<"Digite o valor E: ";
    cin>>e;

    maior = a;

    if(b>maior){
        maior = b;
    }else if(c>maior){
        maior = c;
    }else if(d>maior){
        maior = d;
    }else if(e>maior){
        maior = e;
    }

    cout<<"Maior: "<<maior;
    return 0;
}