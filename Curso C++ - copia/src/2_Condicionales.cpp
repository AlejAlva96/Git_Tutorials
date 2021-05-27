#include<iostream>

using namespace std;

int main(){

    int numero;
    cout<<"Introduzca un numero: "<<endl;
    cin>>numero;

    if(numero >= 5){
        cout<<"El numero introducido es mayor o igual a 5"<<endl;
    }

    else{
        cout<<"El numero introducido es menor que 5"<<endl;
    }
    
    return 0;
}