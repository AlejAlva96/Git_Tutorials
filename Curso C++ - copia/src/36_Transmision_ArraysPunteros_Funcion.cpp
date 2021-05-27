#include<iostream>

using namespace std;

void maxArray(int* , int );

int main(){

    const int NElementos = 10;
    int array[NElementos] = {0,1,2,3,4,5,6,7,8,9};
    int* puntero_Array = array;
    maxArray(puntero_Array, NElementos);

    //ATENCION: COMO UN ARRAY ES UN PUNTERO HACIA LA PRIMERA POSICION DE DICHO ARRAY, NO SERIA NI NECESARIO UTILIZAR EL PUNTERO QUE 
    //HEMOS CREADO YA QUE CON PASARLE EL ARRAY VALDRÍA PORQUE ESTE YA ES UN PUNTERO EN SI. 
}


void maxArray(int* puntero, int numero)
{
    int max = 0;

    for(int i = 0; i<numero; i++)
    {
        if(*(puntero + i) > max)
        {
            max = *(puntero + i); 
        }
    }

    cout<<"El maximo del vector es el valor "<<max;
}