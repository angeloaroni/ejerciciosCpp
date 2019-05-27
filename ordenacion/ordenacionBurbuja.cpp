//ordena un array con numeros aleatoriamente y ordenarlos
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void imprimir(int v[20]){
    cout << endl << "Vector ordeanado" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << " " << v[i] ;
    }
    cout << endl;
}
void burbuja(int v[20]){
    int m;
    for (int i = 0; i < 20; i++)
    {
        for (int x = 0; x < 20; x++)
        {
            if (v[i] < v[x]){
                m = v[i];
                v[i] = v[x];
                v[x] = m;
            }
        }
        
    }
    imprimir(v);
}

void cargarVector(){
    int v[20];
    int aleatorio;
    srand(time(NULL));
    cout << "Vector sin ordenar" << '\n';
    for (int i = 0; i < 20; i++)
    {
        aleatorio = rand()%100;
        v[i] = aleatorio;
        cout << " " << v[i];
    }
    burbuja(v);
}
int main(){
    cout << "ORDENACION METODO DE LA BURBUJA" << '\n';
    cargarVector();
    system("pause");
    return 0;
}