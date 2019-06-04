//pide dos valores numericos por teclado
//guardarlos en un archivo
//luego leelos del archivo
//divide entre si los dos valores
//usa punteros y tryCatch

#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <conio.h>
using namespace std;

int main(int argc, const char** argv) {
    int num1, num2;
    int *puntero_num1, *puntero_num2;
    int num3, num4;
    string linea;

    puntero_num1 = &num1;
    puntero_num2 = &num2;
    try
    {
        cout << "Introduce el primer numero: ";
        if (cin >> *puntero_num1){
            cout << "Introuce el segun do numero: ";
            cin >> *puntero_num2;
        }else{
            throw 200;
        }
        //abrimos fichero en modo escritura
        ofstream escritura;
        if (!escritura.is_open())//is_open() pregunta si es posible abrir el fichero
        {
            escritura.open("division.txt");
            escritura << *puntero_num1 << endl;
            escritura << *puntero_num2 << endl;
            escritura.close();
        }else{
            throw 100;
        }

        ifstream lectura;
        if (!lectura.is_open()){
            lectura.open("division.txt");

            getline(lectura, linea);
            num3 = atoi(linea.c_str());
            getline(lectura, linea);
            num4 = atoi(linea.c_str());
            cout << "division: " << num3/num4 << endl;
            lectura.close();            
        }else{
            throw 101;
        }
        
    }

    catch(int error)
    {
        switch (error)
        {
            case 200:
                cout << "Numero no valido";
                break;
            case 100:
                cout << "Fallo de escritura...";
                break;
            case 101:
                cout << "Fallo de lectura...";
                break;
            
            default:
                break;
        }
    }
    

    return 0;
}