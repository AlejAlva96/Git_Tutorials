#include<iostream>
#include<string.h>


using namespace std;

int main(){

    char palabra[] = "Alejandro";

    //Longitud
    int len = strlen(palabra);
    cout<<"longitud: "<<len<<endl;

    ///Copiar
    char palabra2[20];
    strcpy(palabra2,palabra);
    cout<<"Palabra2: "<<palabra2<<endl;

    //Comparar
    if(strcmp(palabra, palabra2) == 0){
        cout<<"Son iguales"<<endl;
    }

    else{
        cout<<"Diferentes"<<endl;
    }

    //Concatenar
    char palabra4[] = "Alejjjjj";
    strcat(palabra, palabra4);
    cout<<palabra<<endl;

    //Invertir cadena
    strrev(palabra4);
    cout<<"inversa: "<<palabra4<<endl;

    //Pasar a mayusculas
    strupr(palabra);
    cout<<"Mayus: "<<palabra<<endl;

    //Pasar a minusculas
    strlwr(palabra);
    cout<<"Minus: "<<palabra<<endl;
    return 0;
}