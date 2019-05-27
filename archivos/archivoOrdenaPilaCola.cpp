//crea archivo  nombre de archivo introducido por teclado lo muestra y los ordena en y los graba en otro fichero
#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <conio.h>
using namespace std;

string nombreArchivo;
string heroes[5];
string leer_heroes[5];
int num_linea = 0;
string linea;

void crearFichero(){
    cout << "escribir nombre de archivo ";
    cin >> nombreArchivo;
    //getline(cin,nombreArchivo);//en vez del cin
    
    ofstream escritura;
    escritura.open(nombreArchivo.c_str());//convierte el string aun vector de chars

    for (int i = 0; i < 5; i++)
    {
        cout << "Insertar elemento " << i << " : ";
        cin >> heroes[i];
        //getline(cin,heroes[i]);//en vez del cin
        escritura << heroes[i] << endl;     
        num_linea++;   
    }
    cout << num_linea << " lineas leidas.." << endl;    
    escritura.close();
}
void leerFichero(string nombreArchivo){
    
    //cream,os otra variable (lectura) y pasamos a otro vector leer_heroes[]
    ifstream lectura;
    int x = 0;
    lectura.open(nombreArchivo.c_str());

    while (getline(lectura,leer_heroes[x]))
    {
        cout << leer_heroes[x] << endl;
        x++;
    }    
    lectura.close();
}

void burbuja(){
    string m;
    for (int i = 0; i < 4; i++)
    {
        for (int x = i + 1; x < 5; x++)
        {
            if (heroes[i] < heroes[x])
            {
                m = heroes[i];
                heroes[i] = heroes[x];
                heroes[x] = m;
            }
            
        }
    }   
}

void grabar_ordenado(){
    ofstream archivo_ordenado;
    archivo_ordenado.open("archivo_ordenado.txt");
    for (int i = 0; i < 5; i++)
    {
        archivo_ordenado << heroes[i] << endl;
    }
    archivo_ordenado.close();
}


int main(int argc, char const *argv[])
{   
    int opcion;
    string texto;
    do
    {
        cout << "1.- Insertar elemento " << endl;
        cout << "2.- Ordenar elementos " << endl;
        cout << "3.- Listar elemento " << endl;
        cout << "4.- Borrar elemento " << endl;
        cout << "5.- Salir " << endl;
        cout << "Introducir opcion:  " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            crearFichero();
            system("pause");
            break;
        case 2:
            burbuja();
            grabar_ordenado();
            break;
        case 3:
            leerFichero(nombreArchivo);
            system("pause");
            break;
        case 5:
            cout << "Adios..." << endl;
            break;            
        default:
            break;
        }

        
    } while (opcion != 5);
    system("pause");

    return 0;
}
