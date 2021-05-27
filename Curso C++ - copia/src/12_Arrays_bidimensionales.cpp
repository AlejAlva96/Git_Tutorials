#include<iostream>

using namespace std;

int main(){

    int filas, columnas = 0;

    int vector[100][100];

    cout<<"Introduzca numero de filas: ";
    cin>>filas;
    cout<<"Introduzca numero de columnas: ";
    cin>>columnas;

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"Introduzca el valor del vector["<<i<<"]"<<"["<<j<<"]: ";
            cin>>vector[i][j];
        }
    }

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<vector[i][j];
        }
        cout<<endl;
    }
}