/*Crear un programa en C++ que tenga la siguiente jerarquia de clases: Animal(Clase Padre) -> Humano(Clase Hija) -> Perro(Clase Hija)
y hacer polimorfismo con el método comer()*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class Animal{
    private:
        int edad;
    public:
        Animal(int);
        virtual void comer();
};


class Humano:public Animal{
    private:
        string raza;
    public:
        Humano(int, string);
        void comer();
};

class Perro:public Animal{
    private:
        string raza;
    public:
        Perro(int, string);
        void comer();
};

void Animal::comer(){
    cout<<"Yo como";
}

Animal::Animal(int _edad)
{
    edad = _edad;
}

Humano::Humano(int _edad, string _raza):Animal(_edad){
    raza = _raza;
}

void Humano::comer(){
    Animal::comer();
    cout<<" sentado en una mesa"<<endl;
}

Perro::Perro(int _edad, string _raza):Animal(_edad){
    raza = _raza;
}

void Perro::comer(){
    Animal::comer();
    cout<<" y como en el suelo"<<endl;
}


int main(){

    Animal *animales[3];

    animales[0] = new Humano(30, "Andres");
    animales[1] = new Perro(4, "Border Collie");
    animales[2] = new Humano(56, "Eugenio");

    for(int i = 0; i < 3; i++)
    {
        animales[i]->comer();
    }

    return 0;
}