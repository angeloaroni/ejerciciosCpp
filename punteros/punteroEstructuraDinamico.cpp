#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

using namespace std;

struct Fecha
{
    int dia;
    char mes[10];    
};

int main()
{
    Fecha *fechaPuntero;
    int *pDia;
    char *pMes;

    fechaPuntero = (Fecha*) malloc (sizeof(Fecha));
    pDia = (int*) malloc (sizeof(int));
    pMes = (char*) malloc (sizeof(char));


    fechaPuntero[0].mes = 'a';
    fechaPuntero[0].dia = 0;
    pDia = &fechaPuntero[0].dia;
    pMes = &fechaPuntero[0].mes;
    cout << *pDia;
    cout << *pMes;

    fechaPuntero[1].mes = 'm';
    fechaPuntero[1].dia = 5;
    pDia = &fechaPuntero[1].dia;
    pMes = &fechaPuntero[1].mes;
    cout << *pDia;
    cout << *pMes;
    
    return 0;
}

