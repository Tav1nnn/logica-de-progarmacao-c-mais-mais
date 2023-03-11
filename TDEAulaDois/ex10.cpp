#include <iostream>

using namespace std;

int main () {

    float preco, desconto, percentual;

    cout<<"Digite o valor da compra: ";
    cin>>preco;

    cout<<"Digite o valor do desconto: ";
    cin>>desconto;

    percentual = (100*desconto)/preco;

    cout<<"percentual de desconto: "<<percentual<<"%";

    return 0;
}