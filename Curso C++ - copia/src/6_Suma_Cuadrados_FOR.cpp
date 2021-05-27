#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){

    int cuadrado,suma_cuadrados = 0; 

    for(int i = 1; i <11; i++){
        cuadrado = pow(i,2);
        cout<<cuadrado<<endl;
        suma_cuadrados += cuadrado;
    }

    cout <<"Suma cuadrados: "<<suma_cuadrados<<endl;
    getch();
    return 0;
}