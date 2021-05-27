#include<iostream>

using namespace std;

int main(){

    int n, suma = 0;

    cout<<"Introduzca el numero de elementos a sumar: ";
    cin>>n;

    for(int i = 0; i<=n; i++){

        suma += i;
    }

    cout<<"Suma: "<<suma<<endl;
    return 0;
}