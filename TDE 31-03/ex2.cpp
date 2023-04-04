#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    for(int aux=0; aux<=10; aux++){
        cout<<"--------------";
    }
    
    cout<<endl;
    for(int i = 0; i<=10; i++){
        for(int y = 1; y<=10; y++){
            cout<<y<<"x"<<i<<"="<<i*y<<"\t"<<" |    ";
        }
        cout<<endl;
    }
    
    for(int aux=0; aux<=10; aux++){
        cout<<"--------------";
    }
    return 0;
}