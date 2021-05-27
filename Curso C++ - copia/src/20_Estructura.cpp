#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{

    char nombre[20];
    int edad;
}

persona1 = {"Alejandro", 24},
persona2 = {"Miguel", 18};

int main(){

    cout<<"Nombre persona 1: "<<persona1.nombre<<endl;
    cout<<"Persona 1 edad: "<<persona1.edad<<endl;
    getch();
    return 0;
}