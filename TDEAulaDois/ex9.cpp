#include <iostream>

using namespace std;

int main () {

    float saldo, rendimento;

    cout<<"Digite o valor do seu saldo: ";
    cin>>saldo;

    rendimento = (saldo*0.11);

    cout<<"rendimento: "<<rendimento;

    return 0;
}