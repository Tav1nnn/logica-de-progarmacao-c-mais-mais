#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cout<<"Digite um numero: ";
    cin>>num;
    
    while (num<=0){
        cout<<"O numero tem que ser positivo, digite novamente: ";
        cin>>num;
    }
    
    for(int i = 0; i<=10; i++){
        cout<<i<<" x "<<num<<" = "<<i*num<<endl;
    }
    return 0;
}