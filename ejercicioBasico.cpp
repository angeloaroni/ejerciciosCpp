#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;
int main(){
	int num1 = 31;
	int num2;
	char letra;
	#define constante 32;

	cout << "linea1\nlinea2";
	cout << "\nlinea3";
	cout << "constante: " << constante;
	
	cout << "\Introduce el segundo numero: ";
	cin >> num2;
	if((num1 > 30 ) && (num2 >30)){
		cout << "Los dos numeros son mayores de 30";
		return 5;
	}
	if ((num1 > 30) || (num2 > 30)){
		cout << "Al menos unos de los numeros es mayor de 30";
		return 8;
	}
	if (!(num1 > 30) && (num2 > 30)){ // >! es igual a <
		cout << "Al menos unos de los numeros es menor de 30";
		return 10;
	}
}
