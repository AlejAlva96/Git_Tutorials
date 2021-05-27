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

class Alumno : public Persona{
    private:
        string codigo_alumno;
        float notaFinal;
    public: 
        //Cuando creamos el constructor de la clase heredada, los atributos que primero se ponen son los de la clase padre
        Alumno(string, int, string, float);  //Constructor de la clase alumno
        void mostrarAlumno();
};

Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

Persona::~Persona(){

}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{
    codigo_alumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"Codigo Alumno: "<<codigo_alumno<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

int main(){

    Alumno al1 = Alumno("Alejandro", 20, "2342332", 12.4);
    al1.mostrarPersona();
    al1.mostrarAlumno();

}