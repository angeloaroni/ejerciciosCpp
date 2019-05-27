//escribir 5 numeros en un fichero desde parametros
//el programa los tiene leer sumar y mostrar por pantalla
#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
    int numero = 0, suma = 0;
    string linea;
    
    //creamos y abrimos el fichero
    ofstream escritura;
    escritura.open("suma.txt");
    for (int i = 0; i < 5; i++){
        cout << "Escribir numero: ";        
        cin >> numero;
        escritura << numero << endl;//escribe los numeros en el fichero suma.txt
    }
    escritura.close();

    //leemos ficheros y la escribimos
    ifstream lectura;
    lectura.open("suma.txt");
    while (getline(lectura, linea))
    {
        suma = suma + atoi(linea.c_str());
    }
    lectura.close();
    //mostramos por pantalla
    cout << "La suma --> " << suma << endl;
    system("pause");

    return 0;
}
