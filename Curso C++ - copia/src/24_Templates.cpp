//Sacar el valor absoluto de un numero

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){

    int num1 = -4;
    float num2 = -4.3;
    double num4 = -123.3424;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num4);

    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero < 0){
        numero = numero * -1;
    }
    cout<<"El valor absoluto del numero es: "<<numero<<endl;
}