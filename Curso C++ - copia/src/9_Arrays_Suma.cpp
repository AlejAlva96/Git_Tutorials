#include<iostream>

using namespace std;

int main(){

    int numeros[6] = {0,1,2,3,4,5};
    int suma = 0;

    for(int i = 0; i<6; i++){

        suma += numeros[i];

    }

    cout<<"Suma: "<<suma;
    return 0;
}