#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void ordenaSeleccion(int v[10]){
    int m, min;
    for (int i = 0; i < 10; i++){
        min = i;
        for (int x = 0; x < 10; x++){
            if (v[min] < v[x])
                min = x;
            m = v[i];
            v[i] = v[min];
            v[min] = m;
        }
    }
    cout << "\nVector ordenado" << endl;
    for (int i = 0; i < 10; i++)
        cout << " " << v[i];
}

void cargarVector(){
    int v[10];
    int aleatorio;    
    srand(time(NULL));
    cout << "Vector sin ordenar" << '\n';
    for (int i = 0; i < 10; i++)
    {
        aleatorio = rand()%100;
        v[i] = aleatorio;
        cout << " " << v[i];
    }
    ordenaSeleccion(v);
}

main(){
    cargarVector();
}