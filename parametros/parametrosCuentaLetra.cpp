//cuenta cuantos argumetos son letra y cuantos son con numeros asccii de 48 al 57
//isalpha(variable) -> dice si es texto
//isdigit(variable) -> dice si es numero
#include "string"
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string argumentos;
    char letra;
    int ascii;
    int contNumeros = 0;
    int contLetras = 0;
    for (int i = 1; i < argc; i++)
    {
        argumentos = argv[i];
        letra = argumentos[i];
        ascii = letra;
        if ((ascii >= 48) && (ascii <= 57) )
            contNumeros++;
        else    
            contLetras++;
    }
    cout << "Numeros: " << contNumeros << endl;
    cout << "Letras: " << contLetras << endl;
    
}