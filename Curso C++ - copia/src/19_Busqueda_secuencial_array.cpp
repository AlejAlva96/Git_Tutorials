#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int array[4] = {1,2,3,4};
    int numero = 3;

    for(int i = 0; i < 4; i++)
    {
        if(array[i] == numero)
        {
            cout<<"Numero "<<numero<<" encontrado en la posicion "<<i<<endl;
        }
    }

    return 0;
}