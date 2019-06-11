//AgregaR PILAS Y COLAS CN PUNTEROS Y VECTORES DINAMICOS
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int agregarElementoPila(int *pila, int indPila){
	cout << "Introduce nuevo elmento pila: ";
	cin >> pila[indPila];
	indPila++;
	return indPila;
}

void verPila(int *pila, int indPila){
	for (int i = 0; i < indPila; i++)
	{
		cout << pila[i] << " - ";
	}	
}

int borrarElementoPila(int indPila){
	if(indPila == 0)
		cout << "pila vacia..";
	else
		indPila--;

	return indPila;
}
int main(int argc, char const *argv[])
{
	int *pila, indPila = 0;
	pila =(int*) malloc(sizeof(int));

	indPila = agregarElementoPila(pila, indPila);
	verPila(pila, indPila);
	indPila = borrarElementoPila(indPila);
	/* code */
	return 0;
}
