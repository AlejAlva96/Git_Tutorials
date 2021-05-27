//Polimorfismo: Responder de distinta forma ante la misma llamada
#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string, int);
        virtual void mostrar();
};

class Alumno:public Persona{
    private:
        float notaFinal;
    public:
        Alumno(string, int, float);
        void mostrar();
};

class Profesor:public Persona{
    private:
        string materia;
    public:
        Profesor(string, int, string);
        void mostrar();
};

Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal):Persona(_nombre, _edad){
    notaFinal = _notaFinal;
}

void Alumno::mostrar(){
    Persona::mostrar();
    cout<<"Nota Final: "<<notaFinal<<endl;
}

Profesor::Profesor(string _nombre, int _edad, string _materia):Persona(_nombre, _edad){
    materia = _materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout<<"Materia que imparte: "<<materia<<endl;  
}


int main(){

    Persona *vector[3];

    vector[0] = new Alumno("Alejandro", 20, 4.5);
    vector[1] = new Alumno("Andres", 21, 8); 
    vector[2] = new Profesor("Juan", 50, "Matematicas");

    //Se aplica polimorfismo porque para una misma funcion (con el mismo nombre), los objetos responden de diferente forma
    vector[0]->mostrar();
    vector[1]->mostrar();
    vector[2]->mostrar();

    return 0;
}   
