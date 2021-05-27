#include<iostream>

using namespace std;

int main(){

    int numero;
    cout<<"Introduzca un numero: "<<endl;
    cin>>numero;

    switch (numero)
    {
    case 1:
        cout<<"Caso 1"<<endl;
        break;
    case 2:
        cout<<"Caso 2"<<endl;
        break;
    default:
        cout<<"Caso 3"<<endl;
        break;
    }
    
    return 0;
}