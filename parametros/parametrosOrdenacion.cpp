//crear programa que le pasemos argumentos (enteros) a main y los muestre ordenados
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char  *argv[])
{
    if (argc > 3)
    {
        int enteros[argc];//vector dinamico
        for (int i = 1; i < argc; i++){
            enteros[i] = atoi(argv[i]);
        }

        int cambio;
        for (int i = 1; i < argc-1; i++)
        {
            for (int x = i+1; x < argc; x++)
            {
                if (enteros[i] > enteros[x])
                {
                    cambio = enteros[i];
                    enteros[i] = enteros[x];
                    enteros[x] = cambio;
                }                
            }            
        }
        for (int i = 1; i < argc; i++)
            cout << enteros[i] << endl;
    }else{
        cout << "Faltan parametros...";
    }
    
    return 0;
}

