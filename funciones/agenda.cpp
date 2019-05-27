#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

char nombre[20];
char apellido[50];

void pideDatos(){
	cout << "Introduce nombre: ";
	cin >> nombre;
	
	cout << "Introduce apellidos: ";
	cin >> apellido;
}
void verDatos(){
	cout << "Hola " << nombre << " " << apellido;
}
int main(){
	pideDatos();
	verDatos();
	
}


