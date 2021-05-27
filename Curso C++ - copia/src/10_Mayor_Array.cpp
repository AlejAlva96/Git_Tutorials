#include<iostream>

using namespace std;

int main(){
    
    int numeros[6];
    int i = 0;
    int previo, max = 0;
    
    do{
        cout<<"\nIntroduzca el elemento "<<i<<" del vector: ";
        cin>>numeros[i];
        i++;
    }while(i<6);

    for(int i = 0; i<5; i++){
        if(numeros[i] > numeros[i+1]){
            max = numeros[i];
        }
        else{
            max = numeros[i+1];
        }
    }

    cout<<"Maximo: "<<max;

    return 0;
}