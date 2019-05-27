#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
    string contenido[50];
    string linea, original;
    int longitud_cadena, i = 0;
    //original
    cout << "Introduce archivo original: ";
    cin >> original;
    //calcula longitud de cadena
    longitud_cadena = original.length();
    char letras[longitud_cadena];

    original.copy(letras, longitud_cadena);
    //abrimos fichero
    ifstream fichero_original;
    fichero_original.open(letras);
    
    while (getline(fichero_original, linea))
    {
        contenido[i] = linea;
        cout << contenido[i] << endl;
        i++;
    }
    fichero_original.close();
    ///copiamos
    string copia;
    cout << "Introduce el archivo copia: ";
    cin >> copia;
    //calucal longitud de cadena
    longitud_cadena = copia.length();
    char letras_copia[longitud_cadena];

    copia.copy(letras_copia, longitud_cadena);
    //abrimos fichero
    ofstream fichero_copia;
    fichero_copia.open(letras_copia);
    //copia todo el fichero
    for (int x = 0; x < i; x++)
    {
        fichero_copia << contenido[x] << endl;        
    }
    fichero_copia.close();

    cout << "fichero copiado" << endl;
    
    system("pause");
    return 0;
}
