//programa que pida por teclado que abre y lo lee cada N caracteres
//N se pide tambien por teclado
#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

int main(){
    string nombre;
    int posicion;
    char caracter;
    
    cout << "Introduce nombre del archivo: ";
    cin >> nombre;
    cout << "Introduce cada cuantos caracteres leemos: ";
    cin >> posicion;

    ifstream fichero;

    fichero.open(nombre.c_str());
    fichero.seekg(posicion, fichero.beg);
    fichero.get(caracter);

    cout << caracter << endl;

    while (fichero.get(caracter))
    {
        fichero.seekg(posicion, fichero.cur);
        cout << caracter << endl;
    }

    system("pause");
    return 0;
}