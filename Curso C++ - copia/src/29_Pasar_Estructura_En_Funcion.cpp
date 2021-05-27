#include<iostream>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1;

void pedir_datos();
void mostrar_datos_persona(Persona);

int main(){

    pedir_datos();
    mostrar_datos_persona(p1);

}

void pedir_datos()
{
    cout<<"Introduzca su nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout<<"Introduzca su edad: ";
    cin>>p1.edad;
}

void mostrar_datos_persona(Persona p)
{
    cout<<"\n";
    cout<<"Datos personales: ";
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;

}