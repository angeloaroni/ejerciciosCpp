#include "string.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

    //creamos la structura Rec con el tipo typedef
    typedef struct 
    {
        char nombre[21];
        char ciudad[21];
        char estado[3];
    } Rec;
    //creamos eun puntero del struct Rec
    typedef Rec *RecPuntero;
    //creamos variable del tipo del puntero (r) es ya un vector
    RecPuntero r;
    //almacenamos en la variable (r) y reservasmo tamaño dinamico
    r = (RecPuntero)malloc(sizeof(Rec));
    //metemos valor al struct
    strcpy((*r).nombre, "Pacos");
    strcpy((*r).ciudad, "zrz");
    strcpy((*r).estado, "B");
    //muestra la posicion de memoria del elemento
    //(*r).nombre = "Paco";
    // (*r).ciudad = "Zrz";
    // (*r).estado = "B";    
    //imprimimmos
    cout << (*r).nombre << endl;
    cout << (*r).ciudad << endl;
    cout << (*r).estado << endl;
    

    return 0;
}
