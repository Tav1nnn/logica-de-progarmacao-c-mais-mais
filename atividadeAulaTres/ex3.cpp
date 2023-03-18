#include <iostream>

using namespace std;

int main () {

    float a,b,c,d,e, menor;

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

    menor= a;

    if(b<menor){
        menor = b;
    }else if(c<menor){
        menor = c;
    }else if(d<menor){
        menor = d;
    }else if(e<menor){
        menor = e;
    }

    cout<<"Menor: "<<menor;
    return 0;
}