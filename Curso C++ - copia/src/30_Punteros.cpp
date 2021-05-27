#include<iostream>

using namespace std;

int main(){

    int numero = 3;
    int *puntero = &numero;
    cout<<"Direccion de numero: "<<&numero<<endl;
    cout<<"Valor del puntero: "<<puntero<<endl;
    cout<<"Valor de lo que hay donde apunta el puntero: "<<*puntero;

}