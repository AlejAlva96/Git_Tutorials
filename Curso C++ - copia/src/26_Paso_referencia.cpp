#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

void valNuevoRef(int& , int&);
void valNuevoValor(int, int);

//DECLARACION GLOBAL
int numero, elevacion;

int main()
{

    int num1, num2;
    cout<<"Introduzca dos numeros: ";
    cin>>num1>>num2;

    valNuevoRef(num1, num2);

    cout<<"Valor de num1 despues de ref: "<<num1<<endl;
    cout<<"Valor de num2 despues de ref: "<<num2<<endl;

    valNuevoValor(num1, num2);

    cout<<"Valor de num1 despues de valor: "<<num1<<endl;
    cout<<"Valor de num2 despues de valor: "<<num2<<endl;

    return 0;
    
}

void valNuevoRef(int& xnum, int& ynum)
{
    cout<<"Valor de Num1 dentro funcion ref: "<<xnum<<endl;
    cout<<"Valor de Num2 dentro funcion ref: "<<ynum<<endl;

    xnum = 5;
    ynum = 7;

}

void valNuevoValor(int xval, int yval)
{

    xval *= 10;
    yval *= 10;

    cout<<"Valor de Num1 dentro de la funcion: "<<xval<<endl;
    cout<<"Valor de Num2 dentro de la funcion: "<<yval<<endl;
}

