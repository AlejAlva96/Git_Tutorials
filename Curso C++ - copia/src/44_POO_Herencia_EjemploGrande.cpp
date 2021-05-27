/*Crear una estructura de herencia que sea:
            |Persona|
    |Empresario|        |Estudiante|
                        |Universitario|
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
    private: 
        string nombre;
        int edad;
    public:
        Persona(string, int);
        ~Persona();
        void mostrarPersona();
};

class Empresario : public Persona{
    private:
        string empresa;
    public:
        Empresario(string, int, string);
        void mostrarEmpresario();
};

class Estudiante : public Persona{
    private: 
        string rama;
    public: 
        Estudiante(string, int, string);
        void mostrarEstudiante();
};

class Universitario:public Estudiante{
    private:
        string universidad;
    public:
        Universitario(string, int, string, string);
        void mostrarUniversitario();
};

//PERSONA
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

Persona::~Persona(){}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

//EMPRESARIO
Empresario::Empresario(string _nombre, int _edad, string _empresa):Persona(_nombre, _edad)
{
    empresa = _empresa;
}

void Empresario::mostrarEmpresario(){
    mostrarPersona();
    cout<<"Empresa: "<<empresa<<endl;
}

Estudiante::Estudiante(string _nombre, int _edad, string _rama):Persona(_nombre, _edad){
    rama = _rama;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Estudio la rama: "<<rama<<endl;
}

//UNIVERSITARIO
Universitario::Universitario(string _nombre, int _edad, string _rama, string _universidad):Estudiante(_nombre, _edad, _rama){
    universidad = _universidad;
}

void Universitario::mostrarUniversitario(){
    mostrarEstudiante();
    cout<<"Estudio en la universidad "<<universidad<<endl;
}

int main(){

    Empresario e1 = Empresario("Pedro", 54, "Everis");
    Universitario u1 = Universitario("Alejandro", 21, "Ciencias", "Carlos III de Madrid");
    cout<<"Empresario"<<endl;
    e1.mostrarEmpresario();
    cout<<"Estudiante"<<endl;
    u1.mostrarEstudiante();
    cout<<"Universitario"<<endl;
    u1.mostrarUniversitario();
}