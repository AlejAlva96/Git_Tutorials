/*Ejercicio 1: Construya una clase llamada Rectangulo que tenga los siguientes atributos: largo y ancho, y los siguientes metodos:
perimetro() y area()*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class Rectangulo{

    private: 
        float largo, ancho;

    public:
        Rectangulo(float, float);
        void perimetro();
        void area();
};


Rectangulo::Rectangulo(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::perimetro(){
    float _perimetro = 0;
    _perimetro = 2*largo + 2*ancho;
    cout<<"El perimetro es: "<<_perimetro<<endl;
}

void Rectangulo::area(){
    float _area = 0;
    _area = largo*ancho;
    cout<<"El area es: "<<_area<<endl;
}

int main(){
    Rectangulo r1 = Rectangulo(123.4 , 345.65);
    Rectangulo r2(12.556, 23.23);

    r1.area();
    r1.perimetro();
    r2.area();
    r2.perimetro();
}

