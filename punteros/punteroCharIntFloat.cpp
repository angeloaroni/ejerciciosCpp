//crear un char, int, float crear punteros a esas variables 
//asignar cada puntero a su variable

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int numero = 80;
    int *punteroNumero;
    char letra = 'A';
    char *punteroLetra;
    float num = 5.5;
    float *punteroNum;

    punteroNumero = &numero;
    punteroLetra = &letra;
    punteroNum = &num;

    cout << &numero << " corresponde a: " << numero << endl;
    *punteroNumero = 100;
    cout << "puntero: " << *punteroNumero << endl;
    cout << "numero: " << numero << endl;
    cout << "\n\n";
    cout << "puntero a int: " << *punteroNumero <<" memoria " <<&punteroNumero << endl;
    cout << "puntero a char: " << *punteroLetra <<" memoria " <<&punteroLetra << endl;
    cout << "puntero a float: " << *punteroNum <<" memoria " <<&punteroNum << endl;
    
    return 0;
}
