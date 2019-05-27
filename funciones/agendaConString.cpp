#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

string nombre[2];
string apellido[2];

void pideDatos(){
	/*
	cout << "Introduce nombre 1: ";
	cin >> nombre[0];
	
	cout << "Introduce apellidos 1: ";
	cin >> apellido[0];
	
	cout << "Introduce nombre 2: ";
	cin >> nombre[1];
	
	cout << "Introduce apellidos 2: ";
	cin >> apellido[1];
	*/
	
	for(int i=0; i<2;i++){
		cout << "Introduce nombre " << i << ": ";
		getline(cin, nombre[i]);//getline sirve para caputar string con espacios
		cout << "Introduce apellido " << i << ": ";
		getline(cin, apellido[i]);
	}
}
void verDatos(){
	//cout << "1.- " << nombre[0] << " " << apellido[0];
	//cout << "\n2.- " << nombre[1] << " " << apellido[1];
	for(int i=0; i<2;i++){
		cout << "\n" << i << ".- " << nombre[i] << " " << apellido[i];
	}
}
int main(){
	pideDatos();
	verDatos();
	
}

