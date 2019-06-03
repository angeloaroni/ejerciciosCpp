#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <conio.h>
using namespace std;

void insertaNumero(){
    int numero, error;

    try
    {
        cout << "Inserta numero: ";
        if(cin >> numero)
            cout << numero;
        else
            throw 99;

        bool duda;
        cout << "Intro 0 si es NO y 1 si es SI ";
        if (cin >> duda)
            cout << duda;
        else  
            throw 976;


    }
    catch(int error)
    {
        switch (error)
        {
        case 99:
            cout << "No insertaste un numero....";
            break;
        case 976:
            cout << "Opcion invalida";            
            break;
        
        default:
            break;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    insertaNumero();
    return 0;
}
