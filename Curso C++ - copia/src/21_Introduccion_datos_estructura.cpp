#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{

    char nombre[20];
    int edad;
}persona1;

int main(){

    cout<<"Nombre persona 1: ";
    cin.getline(persona1.nombre, 20, '\n');
    cout<<"Persona 1 edad: ";
    cin>>persona1.edad;

    cout<<"Nombre: "<<persona1.nombre<<" Edad: "<<persona1.edad<<endl;

    getch();
    return 0;
}