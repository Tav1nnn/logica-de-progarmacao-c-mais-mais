#include <iostream>

using namespace std;

int main(){
    float a, b;

    cout<<"Digite o valor A e B: "<<endl;
    cin>>a;
    cin>>b;
    
    if(a>b){
        cout<<"O valor "<<a<<" e maior que "<<b;
        return 0;
    }
    cout<<"O valor "<<b<<" e maior que "<<a;
    return 0;
}