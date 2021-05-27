//Sobrecarga constructores
//Pueden existir varios constructores, de ahi la sobrecarga. 
//Por ejemplo podemos poner la fecha de diferente forma:
//Forma 1 -> 9/1/2017 ---- Forma 2 -> 20170109

#include<iostream>
#include<stdlib.h>

using namespace std;

class Fecha{
    private:
        int dia, mes, anio;
    public:
        Fecha(int, int, int);
        Fecha(long);
        void mostrarFecha();
};

//Constructor 1
Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

//Constructor 2
Fecha::Fecha(long fecha){
    anio = int(fecha/10000); //Extraer anio
    mes = int((fecha-anio*10000)/100); //Extraer el mes
    dia = int(fecha - anio*10000 - mes*100);
}

void Fecha::mostrarFecha(){
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}


int main(){

    Fecha f1 = Fecha(25,9,1996);
    f1.mostrarFecha();
    Fecha f2 = (20170109);
    f2.mostrarFecha();
}

