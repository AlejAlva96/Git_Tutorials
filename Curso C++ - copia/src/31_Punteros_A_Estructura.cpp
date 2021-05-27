#include<iostream>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1, *puntero_persona = &p1;

void pedir_datos();
void mostrar_datos(Persona*);

int main(){
    
    pedir_datos();
    mostrar_datos(puntero_persona);

}


void pedir_datos()
{
    cout<<"Introduzca su nombre: ";
    cin.getline(puntero_persona->nombre, 30, '\n');
    cout<<"Introduzca su edad: ";
    cin>>puntero_persona->edad;
}

void mostrar_datos(Persona* puntero_persona_1)
{
    cout<<"Nombre: "<<puntero_persona_1->nombre<<endl;
    cout<<"Edad: "<<puntero_persona_1->edad<<endl;
}