#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;
int main(){
	int opc;
	int resp;
	
	
	
	while(opc != 3){
		cout << "\n1.- Pregunta 1\n";
		cout << "2.- Pregunta 2\n";
		cout << "3.- Salir\n";
		cout << "opcion??";
		cin >> opc;	
		switch(opc){
			case 1:
				cout << "vidas de un gato?";
				cin >> resp;
				if(resp == 7){
					cout << "Correcto";
				}else{
					cout << "Fallaste";
				}
				break;
			case 2:
				cout << "vidas de un pato?";
				cin >> resp;
				if(resp == 1){
					cout << "Correcto";
				}else{
					cout << "Fallaste\n";
				}
				break;
			case 3:
				cout << "Adios..";
				break;
			default:
				cout << "Opcion incorrecta";
				break;
		}
	}
	
	
	
}
