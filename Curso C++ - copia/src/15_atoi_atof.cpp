#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char palabra[] = "123";
    int numero;
    numero = atoi(palabra);
    cout<<"Numero: "<<numero<<endl;

    char palabrafloat[] = "123.23";
    float numero_f;
    numero_f = atof(palabrafloat);
    cout<<"Numero f: "<<numero_f<<endl;
}