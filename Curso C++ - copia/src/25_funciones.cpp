#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

void funpot(int x, int n);

//DECLARACION GLOBAL
int numero, elevacion;

int main(){

    cout<<"Introduzca numero: ";
    cin>>numero;
    cout<<"Introduzca elevacion: ";
    cin>>elevacion;
    funpot(numero, elevacion);
    
}

void funpot(int x, int n)
{
    int resultado = 0;
    resultado = pow(x, n);
    cout<<"El resultado de la operación es: "<<resultado;
}