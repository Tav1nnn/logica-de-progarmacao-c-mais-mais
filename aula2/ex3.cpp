#include <iostream>//biblioteca de entrada e saida 

using namespace std;//para não precisar ultilizar o std na frente do cout

int main(){//função principal iniciada quando execulta o código

    int num;

    cout<<"Digite um valor:";
    cin>> num;

    int divisao = num/2;

    cout<<endl<<"A metade de"<<num<<"é: "<<divisao;

    return 0;//retorna zero para significar que o código deu certo
}