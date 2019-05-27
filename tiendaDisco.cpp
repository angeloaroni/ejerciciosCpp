//guardar 2 discos
//guarda titulo, autor, estilo
//dos formas:
//1.- con tres vectores
//2.- un vector de 2 dimensiones
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

#include <iomanip>  
using namespace std;

int main() {
	string titulo[2];
	string autor[2];
	string estilo[2];

	for (int i = 0; i < 2; i++) {
		titulo[i]="";
		autor[i]="";
		estilo[i]="";
	}
	for (int i = 0; i < 2; i++) {
		cout << "Titulo: " << endl;
		cin >> titulo[i];
		cout << "Autor: " << endl;
		cin >> autor[i];
		cout << "Estilo: " << endl;
		cin >> estilo[i];	
	}
	for (int i = 0; i < 2; i++) {
		cout << "Nombre " << titulo[i] << endl;
		cout << "Autor: " << autor[i] << endl;
		cout << "Estilo: " << estilo[i] << endl;
	}
	
	

}
