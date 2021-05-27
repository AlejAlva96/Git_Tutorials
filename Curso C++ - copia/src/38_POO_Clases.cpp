//Clases en C++

#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
    private: 
        int edad;
        string nombre;
    
    public:
        Persona(int, string); //Constructor
        void leer();
        void correr();
};

//Constructor nos siver para inicializar los atributos de la clase
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;;
}

void Persona::correr(){
    cout<<"Soy "<<nombre<<" y estoy corriendo una maraton"<<endl;;
}

int main(){

    Persona p1 = Persona(20, "Alejandro");
    p1.leer();
    Persona p2(19, "Maria");
    p2.correr();
    Persona p3(21,"Juan");
    p3.correr();
}