#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;
int resul;
int potencia;	
int pideDatos(){
	
	
	
	resul = 1;
	potencia = 0;
	cout << "Indruce un mumero: ";
	cin >> potencia;
	for(int i=1; i <= potencia; i++){
		resul = resul * 2 ; 
	}
	
	return resul;
	
}
void muestra(int resul){	
	cout << "El resultado es 2 ^ " << potencia << " es: " << resul;
}
int main(){
	
	int resul =	pideDatos();
	//int potencia =	pideDatos();
	muestra(resul);
	
}

//sin funciones
/*int main(){
	int resul;
	int potencia;
	resul = 1;
	potencia = 0;
	
	cout << "Indruce un mumero: ";
	cin >> potencia;
	
	for(int i=1; i <= potencia; i++){
		resul = resul * 2 ; 
	}
	
	cout << "El resultado es 2 ^ " << potencia << " es: " << resul;
	
}*/
