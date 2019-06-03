/*
catalogo de 3 cervezas
	Marca
	Casa
	tamaño(float)
	disponible(booleana)
	precio(float)

refresco, dinamico
	marca refresco
	precio
*/
#include "string.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//struct normal
struct Catalogo {
	string marca;
	string casa;
	float tamano;
	bool disponible;	
	float precio;
};
Catalogo cervezas[3];

//struct dinamico
typedef struct  {
	char marca[25];
	int precio;
} CatalogoRefrescos;

typedef CatalogoRefrescos *PunteroRefresco;
PunteroRefresco vector;

int posicion = 0; 

void altaCerveza(){
	for (int i = 0; i < 3; i++)
			{
				cout << "Ingresar marca: " ;
				//cin la manera normal pero no aceota espacios
				//cin >> cervezas[i].marca;
				//get line para que nos acepte espacios
				getline(cin, cervezas[i].marca);                
				cout << "Casa: " ;                
				//cin >> cervezas[i].casa;
				getline(cin, cervezas[i].casa);

				cout << "Tamaño: " ;
				cin >> cervezas[i].tamano;                
				cout << "Disponible: " ;
				cin >> cervezas[i].disponible;				                
				cout << "Precio: " ;
				cin >> cervezas[i].precio;                
				cin.ignore();
			}
}
void verCervezas(){
	cout << endl;
	cout << "Lista de  Cervezas" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Marca: " << cervezas[i].marca << endl;
		cout << "Casa: " << cervezas[i].casa ;
		cout << "Tamaño: " << cervezas[i].tamano << endl;
		cout << "Disponible: " << cervezas[i].disponible << endl;
		cout << "Precio: " << cervezas[i].precio << endl;
		cout << "------------------------------" << endl;
	}
	system("pause");
}

void bajaCerveza(){
	string eliminar;
	cout << "Ingrese nombre de cerveza: ";
	cin >> eliminar;
	for (int i = 0; i < 3; i++)
	{
		if (eliminar == cervezas[i].marca) {
			cervezas[i].marca = "";
			cervezas[i].casa = "";
			cervezas[i].tamano = 0;
   		 	cervezas[i].disponible = NULL;
   		 	cervezas[i].precio = 0;
		}
		else {	
			cout << "La marca " << eliminar << " no existe" << endl;
			system("pause");
			break;
			}

		}
}

void altaRefrescoDinamico(){	
	string mar;
	cout << "Introdusca marca: ";			
	getline(cin, mar);	
	strcpy((*vector).marca, mar.c_str());	

	cout << "Introdusca precio: ";
	cin >> (*vector).precio;		
	cin.ignore();

	*vector++; 
	posicion++;
}

void verRefrescoDinamico(){
	for (int i = 0; i < posicion; i++)//primer for para que ponga en la posicion en cero de la estructura
	{
		*vector--;
	}    
	for (int x = 0; x < posicion; x++)
	{
		cout << "Marca: " << (*vector).marca << endl;				
		cout << "Precio: " << (*vector).precio << endl;
		cout << "---------------------------------" << endl;
		*vector++;	
	}
	
	system("pause");
}

void eliminarRefrescoDinamico(){
	if(posicion == 0)
		cout << "No hay refrescos..." << endl;
	else{
		*vector--;
		posicion--;
	}
}

int main(int argc, char const *argv[])
{
	int opcion=0;
	//para es struct dinamico
	vector = (PunteroRefresco) malloc(1000*sizeof(CatalogoRefrescos));

	do{
		system("CLS");
		cout << "1.- Alta cerveza" << endl;
		cout << "2.- Baja cerveza" << endl;
		cout << "3.- Modifica cerveza" << endl;
		cout << "4.- Mostrar Cervezas" << endl;
		cout << "5.- Alta refresco dinamico" << endl;
		cout << "6.- Mostrar refreso dinamico" << endl;
		cout << "7.- Eliminar ultimo refreso dinamico" << endl;
		cout << "8.- Salir" << endl;
		cout << "Elija opcion ";
		cin >> opcion;
		cin.ignore();

		switch (opcion)
		{
		case 1:			
			altaCerveza();
			break;
		case 2:
			bajaCerveza();
			break;			
		case 3:
			// cout << "Ingrese nombre de bebida a modificar: ";
			// cin >> modificar;
			// for (int i = 0; i < 3; i++)
			// {
			// 	if (modificar == bebidas[i].nombre) {
			// 		cout << "Ingresar id:" << endl;
			// 		cin >> bebidas[i].codigo;
			// 		cout << "nombre:" << endl;
			// 		cin >> bebidas[i].nombre;
			// 		cout << "Tipo:" << endl;
			// 		cin >> bebidas[i].tipo;
			// 		cout << "cantidad" << endl;
			// 		cin >> bebidas[i].cantidad;
			// 		cout << "cantidad" << endl;
			// 	}
			// 	else {
			// 		cout << "La bebidad " << modificar << " no existe.." << endl;
			// 		system("pause");
			// 		break;
			// 	}

			// }
			break;
		case 4:
			verCervezas();
			break;
		case 5:
			altaRefrescoDinamico();
			break;
		case 6:
			verRefrescoDinamico();
			break;
		case 7:
			eliminarRefrescoDinamico();
			break;
		case 8:
			cout << "Adios....";
			break;
		default:
			cout << "Opcion incorrecta";
			break;
		}
	} while (opcion != 8);
	return 0;
}
