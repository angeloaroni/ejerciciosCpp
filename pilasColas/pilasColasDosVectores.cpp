//pilas y colas con 2 vectore
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
using namespace std;

int pila1[5], pila2[5], ind = 0;
int cola1[5], cola2[5], indC = 0;

void insertar(int d){
	if (ind == MAX)
		cout << "Error pila llena";
	else
	{
		//insertamos pilas en 2 vectores comprobamos que el primer vector este lleno
		//y nos ponemos en la posicion 0 del segundo vectro
		if (ind < 5)
			pila1[ind] = d;
		else
			pila2[ind - 5] = d;

		ind++;
	}
}

void verPila(){
	for (int i = 0; i < ind; i++)
	{		
		if(i < 5)
			cout << pila1[i] << " - ";
		else
			cout << pila2[i -5] << " - ";
	}
	cout << endl;	
}

void borrarPila(){
	if(ind = 0)
		cout << "Fallo la pila esta vacia..." << endl;
	else
		ind--;	
}

void insertarCola(int d){
	if(indC == MAX)
		cout << "Fallo la cola esta llena" << endl;
	else
	{
		if(indC < 5)
			cola1[indC] = d;
		else
			cola2[indC-5] = d;

		indC++;		
	}
}

void verCola(){
	for (int i = 0; i < indC; i++)
	{
		if(i < 5)
			cout << cola1[i] << " - ";
		else
			cout << cola2[i-5] << " - "	;
	}
	cout << endl;
	
}

void borrarColaCircular(){
	int temporal;
	if(indC == 0)
		cout << "Fallo cola vacia..";
	else{
		cout << "elemento que pasa al final de la cola " << cola1[0] << endl;
		temporal = cola1[0];
		for (int n = 0; n < indC-1; n++)
		{
			if(n < 4)
				cola1[n] = cola1[n+1];
			if(n == 4)
				cola1[4] = cola2[0];
			if(n > 4)
				cola2[n - 5] = cola2[n-5+1];
		}
		if(indC <= 5)
			cola1[indC-1] = temporal;
		else	
			cola2[indC-6] = temporal;
	}
}
void borrarColaEntera(){
	indC=0;
}

int main(int argc, char const *argv[])
{
	int opcion;
	int d;
	do
	{
		cout << endl;
		cout << "----PILA COLA 2 VECTORES----" << endl;
		cout << endl;
		cout << "1.- Insertar elemento en Pila" << endl;
		cout << "2.- Listar Pila" << endl;
		cout << "3.- Borrar Pila" << endl;
		cout << "4.- Insertar elemento en Cola" << endl;
		cout << "5.- Listar Cola" << endl;
		cout << "6.- Borrar Cola cirular" << endl;
		cout << "7.- Borrar Cola Entera" << endl;
		cout << "9.- Salir" << endl;

		cout << endl<< "Introduce una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "Introduce un elemento(pila) nuevo: " << endl;
			cin >> d;
			insertar(d);
			break;
		case 2:
			verPila();
			break;
		case 3:
			borrarPila();
			break;
		case 4:
			cout << "Introduce un elemento(cola) nuevo: " << endl;
			cin >> d;
			insertarCola(d);
			break; 
		case 5:
			verCola();
			break;
		case 6:
			borrarColaCircular();
			break;
		case 7:
			borrarColaEntera();
			break;
		}

	} while (opcion != 9);

	system("pause");
	return 0;
}
