//abrir un archivo de que indiquemos por argumento de main con formato APELLIDO, NOMBRE
//tenemos que ordenar el contenido y grabarlo en otro en otro archivo.

#include "string"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int num_linea = 0;
string linea;
string vector[20];

void burbuja(){
    string m;
    for (int i = 0; i < 20; i++)
    {
        for (int x = i + 1; x < 20; x++)
        {
            if (vector[i] < vector[x])
            {
                m = vector[i];
                vector[i] = vector[x];
                vector[x] = m;
            }
            
        }
    }   
}

void grabar_ordenado(){
    ofstream archivo_ordenado;
    archivo_ordenado.open("archivo_ordenado.txt");
    for (int i = 0; i < num_linea; i++)
    {
        archivo_ordenado << vector[i] << endl;
    }
    archivo_ordenado.close();
}


int main(int argc, char *argv[]){
    string argumento = argv[1];
    
    ifstream archivo_desordenado;//creamos el archivo
    //abrimos el archivo ,c_str te devuelve un array de char, de hecho un puntero a un array de char
    archivo_desordenado.open(argumento.c_str());
    //recorremos el archivo
    while (getline(archivo_desordenado,linea))
    {
        vector[num_linea] = linea;
        num_linea++;
    }
    cout << num_linea << " lineas leidas..";
    archivo_desordenado.close();    

    burbuja();
    grabar_ordenado();

    getch();
    return 0;
}