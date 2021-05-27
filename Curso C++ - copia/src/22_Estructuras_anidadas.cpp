#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){

    for(int i = 0; i<2; i++)
    {
        fflush(stdin);
        cout<<"Introduzca su nombre: ";
        cin.getline(empleados[i].nombre, 50, '\n');
        cout<<"Introduzca su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 50, '\n');
        cout<<"Introduzca su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 50, '\n');
        cout<<"Introduzca su provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 50, '\n');
        cout<<"Introduzca su salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    for(int i = 0; i<2; i++)
    {
        fflush(stdin);
        cout<<"Nombre empleado "<<i<<": "<<empleados[i].nombre<<endl;
        cout<<"Direccion empleado "<<i<<": "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad empleado "<<i<<": "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia empleado "<<i<<": "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario empleado "<<i<<": "<<empleados[i].salario<<endl;
        cout<<"\n";
    }

    return 0;
}