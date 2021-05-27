#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
    float nota1, nota2, nota3;
};

struct alumno{
    char nombre[40];
    char sexo[20];
    int edad;
    struct promedio promedio_alumno;
}alumno1;

float calcular_promedio(float nota_1, float nota_2, float nota_3)
{
    float promedio = 0;
    promedio = (nota_1 + nota_2 + nota_3)/3;
    return promedio;
}
int main(){

    cout<<"Introduzca los datos del alumno: "<<endl;
    cout<<"Introduzca su nombre: ";
    cin.getline(alumno1.nombre, 30, '\n');
    cout<<"Introduzca el sexo: ";
    cin>>alumno1.sexo;
    cout<<"Introduzca la edad: ";
    cin>>alumno1.edad;
    cout<<"Introduzca el la nota 1: ";
    cin>>alumno1.promedio_alumno.nota1;
    cout<<"Introduzca el la nota 2: ";
    cin>>alumno1.promedio_alumno.nota2;
    cout<<"Introduzca el la nota 3: ";
    cin>>alumno1.promedio_alumno.nota3;

    float nota_promedio = 0;
    nota_promedio = calcular_promedio(alumno1.promedio_alumno.nota1, alumno1.promedio_alumno.nota2, alumno1.promedio_alumno.nota3);

    cout<<"DATOS ALUMNO"<<endl;
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<nota_promedio<<endl;

    getch();
    return 0;
}