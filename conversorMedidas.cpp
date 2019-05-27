#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;
int main(){
	float km;
	float grados;
	int opc;
	
	do{
		system("CLS");
		cout << "1.- Convertir Km a Millas\n";
		cout << "2.- Convertir C a F\n";
		cout << "3.- Salir\n";
		cout << "Elige opcion: ";
		cin >> opc;
	
		switch (opc){
			case 1:
				cout << "Ingrese kilometros: ";
				cin >> km;
				cout << km << " Km son: " << km * 3.62 << " Millas\n";
				break;
			case 2:
				cout << "Ingrese grados Celsius: ";
				cin >> grados;
				cout << grados << " C son: " << grados * 1.1 << " Farhen\n";
				break;
			case 3:
				cout << "Adioss......"	;
				break;
			default:	
				cout << "Opcion incorrecta\n";
				break;
		}
		system("PAUSE");	
	}while (opc != 3) 
	
	
//	if (opc == 1){
//		cout << "Ingrese kilometros: ";
//		cin >> km;
//		cout << km << " Km son: " << km * 1.5 << "Millas";
//	}
//	if (opc == 2){
//		cout << "Ingrese kilometros: ";
//		cin >> km;
//		cout << km << " Km son: " << km * 1.5 << " Millas";
//	}
}
