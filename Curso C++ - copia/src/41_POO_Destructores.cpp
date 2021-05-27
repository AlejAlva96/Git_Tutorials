#include<iostream>
#include<stdlib.h>

using namespace std;

class Perro{
    private:
        string nombre, raza;
    public:
        Perro(string, string);
        ~Perro();
        void mostrar_Datos();
        void comer();
        void ladrar();
};


Perro::Perro(string _nombre, string _raza){
    nombre = _nombre;
    raza = _raza;
}

Perro::~Perro(){
}

void Perro::mostrar_Datos(){
    cout<<"El perro se llama "<<nombre<<" y es de raza "<<raza<<endl;
}

void Perro::comer(){
    cout<<nombre<<" está comiendo"<<endl;
}

void Perro::ladrar(){
    cout<<nombre<<" está ladrando"<<endl;
}
 
int main(){
    Perro p1 = Perro("Figo", "Doberman");
    p1.mostrar_Datos();
    p1.comer();
    p1.ladrar();
    p1.~Perro(); //Destruyendo el objeto

}