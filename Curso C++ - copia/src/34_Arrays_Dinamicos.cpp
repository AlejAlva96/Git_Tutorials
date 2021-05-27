/*
Asignacion dinamica de arrays

new: Reserva el numero de bytes solicitado por la declaracion.
delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un array dinamico
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

void pedir_datos();
void mostrar_calif();

int num_calif, *calif;

int main(){

    pedir_datos();
    mostrar_calif();

}

void pedir_datos()
{
    
    cout<<"Introduzca el numero de calificaciones: ";
    cin>>num_calif;
    calif = new int[num_calif];

    for(int i = 0; i<num_calif; i++)
    {
        cout<<"Calificacion "<<i<<": ";
        cin>>calif[i];
    }

}

void mostrar_calif()
{
    cout<<"\n";
    cout<<"CALIFICACIONES:";
    
    for(int i = 0; i<num_calif; i++)
    {
        cout<<"Calificacion "<<i<<": "<<calif[i];
        cout<<"\n";
    }
}