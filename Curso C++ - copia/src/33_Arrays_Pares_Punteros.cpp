#include<iostream>

using namespace std;

int main(){

    int cadena[5];
    int * dir_numeros;
    dir_numeros = cadena;

    cout <<"Posicion 0 mem: "<<&cadena[0]<<endl;
    cout<<"Puntero mem: "<<dir_numeros<<endl;

    for(int i = 0; i<5; i++)
    {
        cout<<"Introduzca el valor "<<i<<": ";
        cin>>cadena[i];
    }

    for(int i = 0; i<5; i++)
    {
        if(*dir_numeros%2 == 0)
        {
            cout<<"El valor de la posicion "<<i<<" es par"<<endl;
            cout<<"Este vale: "<<*dir_numeros<<endl;
            cout<<"Su posicion de memoria es: "<<dir_numeros<<endl;
        }
        dir_numeros++;
    }

    return 0;

}