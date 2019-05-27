#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

//void significa que no devuelve nada
main(){
	int numero;
	string texto;// un string son una cadena de char(varios char)
	char letra;
	
	
	cout << "hola claro que si";
	cout << "\nInserta un numero: ";
	cin >> numero;
	cout << "\nInserta un texto: ";
	cin >> texto;
	cout << "\nInserta un caracter: ";
	letra = getch();	
	
	
	cout << "\nnumero: " << numero;
	cout << "\ntexto: " << texto;
	cout << "\nletra: " << letra;
	
}
