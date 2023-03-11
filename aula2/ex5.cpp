#include <iostream>//biblioteca de entrada e saida 

using namespace std;//para não precisar ultilizar o std na frente do cout

int main(){//função principal iniciada quando execulta o código

    string nome, endereco, telefone; //criando as variaveis que o usuario vai inserir
    
    cout<<"Digite seu nome: "; //indicando para usuario digitar seu nome
    cin>>nome;//recebendo o valor digitado na variavel nome
    
    cout<<endl<<"Digite seu endereço: ";//indicando para usuario digitar seu endereço
    cin>>endereco;//recebendo o valor digitado na variavel endereco

    cout<<endl<<"Digite seu numero de telefone: ";//indicando para usuario digitar seu telefone
    cin>>telefone;//recebendo o valor digitado na variavel telefone
    
    cout<<endl<<"Seu nome: "<<nome<<endl;//apresentando na tela o nome
    cout<<endl<<"Seu endereço: "<<endereco<<endl;//apresentando na tela o endereco
    cout<<endl<<"Seu telefone: "<<telefone<<endl;//apresentando na tela o telefone
    return 0;//retorna zero para significar que o código deu certo
}