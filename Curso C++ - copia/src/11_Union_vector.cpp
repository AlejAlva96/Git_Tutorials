#include<iostream>

using namespace std;

int main(){

    int vector1[4] = {1,2,3,4};
    int vector2[4] = {5,6,7,8};
    int vector3[8];

    for(int i = 0; i < 4; i++)
    {
        vector3[i] = vector1[i];
    }

    for(int j = 0; j < 4; j++)
    {
        vector3[j+4] = vector2[j];
    }

    for(int i = 0; i < 8; i++)
    {
        cout<<vector3[i]<<endl;
    }
}