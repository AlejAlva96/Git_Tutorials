#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int numero;
    cout<<"Introduzca un numero: "<<endl;
    cin>>numero;

    do{
        cout<<numero<<endl;
        numero ++;  
    }while(numero <= 10);
    
    getch();
    return 0;
}