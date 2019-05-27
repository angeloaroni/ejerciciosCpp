#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    char cadena[128];
    string texto;
    //crea un fiocehro de salida
    ofstream fs("nombre.txt");

    fs << "hola mundo";
    fs << "hoolaaaa";

    fs.close();

    ifstream fe("nombre1.txt");
    //leemos meidate getline, si lo hicieramos mediante << solo
    //leeriamos parte de la cadena.
    fe.getline(cadena, 128);//lee char
    getline(fe,texto);//lee string

    cout << cadena << endl;
    cout << endl << texto << endl;

    fe.close();
    return 0;
}
