// crea menu
// 1.- Registrar clientes
// 2.- Mostrar datos actuales 
// 3.- Mostrar un linea concreto
// 4.- Salir del menu 
// leer clientes
// pide por teclado datos de 3 clientes guardalos en un fichero con el formato nombre:dni muestra los clientes uno por linea
// usa funciones para cada puto de menu
#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
string nombre[3];
string dni[3];

void abrirArchivo(){
    ofstream registro;
    registro.open("cliente.txt");

    for (int i = 0; i < 3; i++)
    {
        cout << "Introduce nombre del cliente: ";        
        cin >> nombre[i];
        cout << "Introduce dni del cliente: ";
        cin >> dni[i];
        registro << nombre[i] << " : " << dni[i] << endl;
    }    
}

void muestraUnCliente(){
    ifstream clientes;
    clientes.open("cliente.txt");
    string lineas;   
    int buscar, contador = 0; 
    cout << "Elige posicion a mostrar: ";
    cin >> buscar;
    while (getline(clientes, lineas))
    {    
        contador++;           
        if (buscar == contador)        
            cout << lineas << endl;        
    }
    clientes.close();
    system("pause");
}

void muestraClientes(){
    ifstream clientes;
    clientes.open("cliente.txt");
    string lineas;
    while (getline(clientes, lineas))
    {
        cout << lineas << endl;
    }
    clientes.close();
    system("pause");
}

void muestraOpcion(){
    int opc;
    do
    {        
        cout << "REGISTRO PARA CLIENTES" << endl;
        cout << "1.- Registrar clientes " << endl;
        cout << "2.- Mostrar clientes " << endl;
        cout << "3.- Mostrar un cliente en concreto " << endl;
        cout << "4.- Salir del menu " << endl;
        cin >> opc;
        switch (opc)
        {
            case 1:
                abrirArchivo();
                break;
            case 2:
                muestraClientes();
                break;
            case 3:
                muestraUnCliente();
                break;
            case 4:
                cout << "Adios.." << endl;
                break;        
            default:
                cout << "Opcion incorrecta.." << endl;
            }
    } while (opc != 4);
}

int main()
{
    muestraOpcion();
    system("pause");
    return 0;
}
