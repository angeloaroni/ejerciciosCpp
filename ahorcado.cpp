#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"
using namespace std;

int main(){
    char palabra[4];
    char palabra_acertada[4];
    char letra;
    int posicion_acierto;
    int fallos;
    int exito;
    bool acierto = false;

    palabra[0] = 'c';
    palabra[1] = 'o';
    palabra[2] = 's';
    palabra[3] = 'a';

    do {
        cout << "Ingresa Palabra" << '\n';
        cin >> letra;
        for (int i = 0; i < strlen(palabra); i++)
        {
            if(palabra[i] == letra ){
                posicion_acierto = i;
                acierto = true;
            }
        }
        if (acierto == true)
        {
            exito++;
            palabra_acertada[posicion_acierto] = letra;
        }else{
            fallos++;
        }
        acierto = false;
        for (int i = 0; i < strlen(palabra); i++)
        {
            cout << palabra_acertada[i];
        }
        if (exito == strlen(palabra)){
            fallos = 5 ;
            cout << "\nFelicidades!!!";
        }
    } while(fallos < 5);
}
