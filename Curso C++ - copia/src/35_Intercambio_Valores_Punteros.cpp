#include<iostream>
#include<stdlib.h>

using namespace std;

void intercambio(int*, int*);

int main(){

    int numero1 = 7, numero2 = 3;

    cout<<"Valor del numero 1: "<<numero1<<endl;
    cout<<"Valor del numero 2: "<<numero2<<endl;

    intercambio(&numero1, &numero2);

    cout<<"Valor del numero 1 despues: "<<numero1<<endl;
    cout<<"Valor del numero 2 despues: "<<numero2<<endl;
}

void intercambio (int *num1, int *num2)
{
    int aux = 0;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}