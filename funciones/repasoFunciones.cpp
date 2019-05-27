//realiza 4 funciones
// 1.- dentro de ella crea un string un muestralo
// 2.- crea un int en main, mandaselo a la funcion y muestralo desde la funcion
// 3.- crea un string en la funcion y envialo a main para mostrarlo desde main
// 4.- crea un int en main, mandaselo a la funcion desde la funcion le sumas 10 
// y envialo a main para mostrarlo desde main.
#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <conio.h>
using namespace std;
void primera(){
    string texto;
    texto = "Lunes";
    cout << texto;
}
void segunda(int numero){
    numero =  numero + 5;
    cout << numero;
}
string tercera(){
    string cadena;
    cadena = "black monday";
    return cadena;
}

int cuarta(int entero){
    entero = entero + 10;
    return entero;
}
int main(int argc, char const *argv[])
{
    int numero=20;

    primera();
    segunda(numero);

    string cadena;
    cadena = tercera();
    cout << "cadena: " << cadena;

    int entero=3;
    entero = cuarta(entero);
    cout << "entero: " << entero;

    return 0;
}

