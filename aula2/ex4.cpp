#include <iostream>//biblioteca de entrada e saida 

using namespace std;//para não precisar ultilizar o std na frente do cout

int main(){//função principal iniciada quando execulta o código

    float num;//criando uma váriavel float

    cout<<"Digite um valor float:";//para o usuário entender que precisa digitar um valor
    cin>> num;//entrando o valor do usuário na variavel num

    float divisao = num/2; //criando a variavem divisão recebendo o num/2

    cout<<endl<<"A metade de "<<num<<" é: "<<divisao;//printando o resultado da divisão

    return 0;//retorna zero para significar que o código deu certo
}