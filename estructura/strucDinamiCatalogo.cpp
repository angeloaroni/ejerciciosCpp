// catalogo de daños (char descripcion [25], float cantidad)
// vector dinamico de struct
// añadir, ver, borrar uno, borrar todos

#include "string.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//////// STRUCT DINAMICO ////////////////
typedef struct {
	float cantidad;		
	char descripcion[25];
} catalogo;
typedef catalogo *dano;
dano vector;
int posicion = 0; 

void anadir(){
	//anadir(vector); 
	cout << "Introdusca cantidad: ";
	cin >> (*vector).cantidad;		
	cin.ignore();

	string desc;
	cout << "Introdusca descripcion: ";			
	getline(cin, desc);
	strcpy((*vector).descripcion, desc.c_str());				
	*vector++; 

	posicion++;
}
void ver(){
	for (int i = 0; i < posicion; i++)
	{
		*vector--;
	}
		for (int x = 0; x < posicion; x++)
		{
			cout << "Struct cantidad: " << (*vector).cantidad << endl;				
			cout << "Struct descripcion: " << (*vector).descripcion << endl;
			*vector++;			
		}
		
	system("pause");
}
void eliminar(){
	if (posicion!=0)
		*vector--;
	else{

		cout << "vector vacio" << endl;
		posicion--;
	}
	
}
void eliminarTodo(){
	for (int i = 0; i < posicion; i++)
		*vector--;
	
}
int main(int argc, char const *argv[])
{
	int opcion;
	vector = (dano) malloc(1000*sizeof(catalogo));

	do
	{
		system("cls");
		cout << endl;
		cout << "--------------MENU-------------" << endl;
		cout << endl;
		cout << "1.- Añadir " << endl;
		cout << "2.- Ver " << endl;
		cout << "3.- Eliminar un elemento " << endl;
		cout << "4.- Eliminar todo" << endl;		
		cout << "5.- Salir" << endl;

		cout << endl<< "Introduce una opcion: ";
		cin >> opcion;
		cin.ignore();
		
		switch (opcion)
		{
			case 1:                
				anadir(); 
				break;
			case 2:
				ver();
				break;
			case 3:
				eliminar();
				break;
			case 4:
				eliminarTodo();
				break; 
			case 5:
				cout << "ADIOS" ;
				break;			
		}

	} while (opcion != 5);

	return 0;
}
