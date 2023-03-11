#include <iostream>//biblioteca de entrada e saidad de dados

using namespace std;//para não ultilizar std na frente dos cout

int main() {//função principal 

    int num, centena, dezena, unidade;//variaveis

    cout<<"Digite um valor: "; //pedindo para digitar o valor
    cin>>num;//pegando o valor

    //realizando os calculos de inversão
    centena = num / 100;
    unidade = num % 100;
    dezena = unidade / 10;
    unidade = unidade % 10;

    //invertido
    cout<<(unidade*100)+(dezena*10)+(centena*1)<<endl;

    return 0;//se retornar zero significa sulcesso na execulção
}