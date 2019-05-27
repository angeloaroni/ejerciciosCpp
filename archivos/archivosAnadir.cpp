//abrir un fichero existente y agregar contenido
#include "string"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int opciones;
    string nombre;
    int id;
    string nombreFichero;
    string linea;//linea pra poder lear

    cout << "Escriba le nombre del fichero (katalog.txt): " << endl;
    getline(cin,nombreFichero);//envez de usar el cin >>

    ofstream escritura;
    escritura.open(nombreFichero.c_str(),ios::app);//ios::app  abrimos para agregar ,, c_str() convierete el string en un vector de chars

    ifstream lectura;
    lectura.open(nombreFichero.c_str());

   

    do
    {
        cout << "1.- Añadir producto " << endl;
        cout << "2.- Ver catalogo " << endl;
        cout << "3.- Salir " << endl;
        cout << "Elija opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:

            cout << "Introdusca nombre: " << endl;
            cin >> nombre;
            cout << "Introdusca id: " << endl;
            cin >> id;
            escritura << nombre << " : " << id << endl;
            cout << "Producto añadido correctamente";
            
            break;        
        case 2:
           
            cout << "Catalogo" << endl;
            //leemos el fichero
            while ( getline(lectura,linea))
            {
                cout << linea << endl;
            }
            
            //system("pause");
            //lectura.seekg(0,lectura);            
            break;        
        default:
            break;
        }
    } while (opciones != 4);
    
    
    return 0;
}
