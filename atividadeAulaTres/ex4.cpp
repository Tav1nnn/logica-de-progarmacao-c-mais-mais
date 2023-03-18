#include <iostream>

using namespace std;

int main () {

    int num;

    cout<<"Digite um numero: ";
    cin>>num;    

    if((num%2)==0){
        cout<<"Numero par";
        return 0;
    }

    cout<<"Numero impar";
    return 0;
}