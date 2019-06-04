//lee dos int, guradalos en un archivo
//lee el archivo y muestra los int en orden inverso
//controlalo con tryCatch que se intoruzca bien los int
//y la escritura y la lectura.

#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4;
    string linea;

    try
    {
        cout << "Introduce numero 1: ";
        if(cin >> num1){
            cout << "Introduce numero 2: ";
            cin >> num2;
        }else{
            throw 100;
        }
        //abrimos fichero en modo escritura
        ofstream escritura;
        if (!escritura.is_open())
        {
            escritura.open("numerosOrdena.txt");
            escritura << num1 << endl;
            escritura << num2 << endl;
            escritura.close();
        }else{
            throw 101;
        }
        //abrimos fichero en modo lectura
        ifstream lectura;
        if (!lectura.is_open())
        {
            lectura.open("numerosOrdena.txt");            
            getline(lectura, linea);
            num3 = atoi(linea.c_str());
            getline(lectura, linea);
            num4 = atoi(linea.c_str());

            if(num3 < num4)
                cout << num3 << " - " << num4 << endl;
            else  
                cout << num4 << " - " << num3 << endl;    
            lectura.close();  
        }
        

    }
    catch(int error)
    {
        switch (error)
        {
        case 100:
            cout << "tiene que ser numero... ";
            break;
        case 101:
            cout << "fallo al abrir el fichero...";
            break;
        
        default:
            break;
        }
        
    }
    
    return 0;
}
