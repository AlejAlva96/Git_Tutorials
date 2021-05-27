#include<iostream>
#include<string.h>


using namespace std;

int main(){

    char palabra[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
    char nombre[20];

    cout<<"Introduzca su nombre: ";
    cin.getline(nombre, 20, '\n');

    cout<<nombre<<endl;
    return 0;
}