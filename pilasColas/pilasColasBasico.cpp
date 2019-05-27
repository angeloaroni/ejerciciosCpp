#include "string"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#define MAX 20
using namespace std;

string pila[MAX];
int ind=0;
string cola[MAX];
int ind_c=0;

void insertar(string texto){
    if (ind == MAX){
        cout << "Error Pila llena " ;
        getch();
    }else{
        pila[ind] = texto;
        ind++;
    }
}

void verPila(){
    for (int i = 0; i < ind; i++){
        cout << pila[i] << " - ";
    }
    cout << endl;  
    system("pause");
}

void borrarPila(){
    if(ind == 0)
        cout << "Error la pila es vacia " << endl;
    else
        ind--;    
}

void insertarCola(string texto){
    if(ind_c == MAX){
        cout << "Error pila llena ";
        getch();
    }else{
        cola[ind_c] = texto;
        ind_c++;
    }    
}

void verCola(){
    for (int i = 0; i < ind_c; i++)
    {
        cout << cola[i] << " : ";
    }
    cout << endl;    
    system("pause");
}
void borrarCola(){
    if(ind_c == 0)
        cout << "Error Cola esta vacio";
    else{
        cout << cola[0];
        for (int i = 0; i < ind_c; i++)
        {
            cola[i] = cola[i + 1];
        }
        ind_c--;
    }
}

int main(int argc, char const *argv[])
{
    int opcion;
    string texto;
    
    do
    {
        cout << "1.- Insertar elemento en Pila: " << endl;
        cout << "2.- Listar Pila: " << endl;
        cout << "3.- Borrar Pila: " << endl;
        cout << "4.- Insertar elemento en Cola: " << endl;
        cout << "5.- Listar Cola: " << endl;
        cout << "6.- Borrar Cola: " << endl;
        cout << "7.- Borrar Cola Entera: " << endl;        
        cout << "9.- Salir " << endl;

        cout << endl << "Introducir una opcion: " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Introduce un elemento nuevo: " ;
            cin >> texto;
            insertar(texto);
            break;
        case 2:
            verPila();
            break;
        case 3:
            borrarPila();
            break;
        case 4:
            cout << "Introducir un elemento(COLA) nuevo: ";
            cin >> texto;
            insertarCola(texto);
            break;
        case 5:
            verCola();
            break;
        case 6:
            borrarCola();
            break;
        case 9:
            borrarPila();
            break;
        default:
            cout << "Opcion invalida..." << endl;
            break;
        }
        
    } while (opcion !=8);
    system("pause");  

    return 0;
}
