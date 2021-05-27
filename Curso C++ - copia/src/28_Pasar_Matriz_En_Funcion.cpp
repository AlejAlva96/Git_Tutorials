#include<iostream>
#include<conio.h>

using namespace std;

void mostrar_matriz(int mat[][3], int, int);
void cuadrado_matriz(int mat[][3], int, int);

int main(){

    const int FILAS = 2, COLS = 3;

    int matriz[FILAS][COLS] = {{1,2,3},{4,5,6}};

    mostrar_matriz(matriz, FILAS, COLS);
    cuadrado_matriz(matriz, FILAS, COLS);
    cout<<"Matriz al cuadrado: ";
    mostrar_matriz(matriz, FILAS, COLS);
}

void mostrar_matriz(int mat[][3], int fil, int col)
{
    cout<<"Matriz: "<<endl;

    for(int i=0; i<fil; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<mat[i][j];
        }
        cout<<"\n";
    }
}

void cuadrado_matriz(int mat[][3], int fil, int col)
{

    for(int i=0; i<fil; i++)
    {
        for(int j=0; j<col; j++)
        {
            mat[i][j] *= mat[i][j];
        }
    }
}