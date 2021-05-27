#include<iostream>

using namespace std;

int main(){

    int numero = 0;

    do{
        cout<<"Introduzca un valor: ";
        cin>>numero;
        cout<<numero<<endl;
    }while((numero <20 || numero > 30) && numero != 0);

    return 0;
}