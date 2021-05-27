#include<iostream>

using namespace std;

int main(){

    int cadena[] = {1,2,3,4,5};
    int * dir_numeros = &cadena[0];

    for(int i = 0; i<5; i++)
    {
        cout<<"Valor de la posicion ["<<i<<"]: "<<*dir_numeros<<endl;
        cout<<"Valor de la direccion de la posicion ["<<i<<"]: "<<dir_numeros++<<endl;
        dir_numeros = dir_numeros + 1;
    }

    return 0;

}