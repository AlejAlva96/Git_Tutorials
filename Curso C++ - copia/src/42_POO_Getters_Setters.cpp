//Metodos constructores y Modificadores (Getters y Setter) Muy utiles en herencia
#include<iostream>
#include<stdlib.h>

using namespace std;

class Punto{
    private:
        int x, y;
    public:
        Punto();
        void setPunto(int, int);
        int getPuntoX();
        int getPuntoY();
};

Punto::Punto(){

}

//Establecemos valores a los atributos
void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

//Mostramos los atributos de ese objeto creado
int Punto::getPuntoX(){
    return x;
}

int Punto::getPuntoY(){
    return y;
}

int main(){
    Punto p1;
    p1.setPunto(12,345);
    cout<<"El valor de x es: "<<p1.getPuntoX()<<endl;
    cout<<"El valor de y es: "<<p1.getPuntoY()<<endl;
}