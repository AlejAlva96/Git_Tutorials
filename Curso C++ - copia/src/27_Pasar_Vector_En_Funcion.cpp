#include<iostream>
#include<conio.h>

using namespace std;

void cuadrado_vector(int vec[], int size);
void mostrar_vector(int vec[], int size);
void cambiar_signo(int vec[], int size);


int main(){

    const int TAM = 5;
    int vector[] = {1,2,3,4,5};

    cuadrado_vector(vector, TAM);
    mostrar_vector(vector, TAM);
    cambiar_signo(vector, TAM);
    mostrar_vector(vector, TAM);
    return 0;
}


void cuadrado_vector(int vec[], int size)
{
    for(int i = 0; i < size; i++)
    {
        vec[i] *= vec[i];
    }
}

void mostrar_vector(int vec[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<"\n";
        cout<<vec[i]<<" ";
    }
}

void cambiar_signo(int vec[], int size)
{
    for(int i = 0; i < size; i++)
    {
        vec[i] *= -1;
    }
}