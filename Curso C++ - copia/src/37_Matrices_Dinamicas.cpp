/*Matrices Dinamicas

Ejemplo: Rellenar una matriz NxM y postrar su contenido

**puntero_matriz -> *puntero_fila -> [int][int]
                    *puntero_fila -> [int][int]
                    *puntero_fila -> [int][int]

1 2 3  puntero_matriz apunta a los primeros elementos de cada fila es decir a 1, 4 y 7 los cuales son punteros a un vector .
4 5 6  puntero_fila apunta a los diferentes elementos de dicha fila
7 8 9

*/

#include<iostream>
#include<stdlib.h>
  
using namespace std;

void pedir_datos();
void mostrar_matriz(int**, int, int);

int **puntero_matriz;
int num_filas, num_columnas = 0;

int main(){

    pedir_datos();
    mostrar_matriz(puntero_matriz, num_filas, num_columnas);

}

void pedir_datos()
{
    cout<<"Introduzca el numero de filas: ";
    cin>>num_filas;
    cout<<"Introduzaca el numero de columnas: ";
    cin>>num_columnas;

    puntero_matriz = new int* [num_filas]; //Reservamos memoria para las filas

    //Ahora vamos a reservar memoria para las columnas
    for(int i = 0; i < num_filas; i++)
    {
        puntero_matriz[i] = new int [num_columnas];
    }

    cout<<"Introduzca los elementos de la matriz: ";

    for(int i = 0; i < num_filas; i++)
    {
        for(int j = 0; j < num_columnas; j++)
        {
            cout<<"Introduzca el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j);
        }
    }
}

void mostrar_matriz(int **puntero_matriz, int num_filas, int num_columnas)
{
    cout<<"\n";
    cout<<"Mostrando los valores de la matriz"<<endl;;

    for(int i = 0; i < num_filas; i++)
    {
        for(int j = 0; j < num_columnas; j++)
        {
            cout<<*(*(puntero_matriz+i)+j);
        }
        cout<<"\n";
    }
}