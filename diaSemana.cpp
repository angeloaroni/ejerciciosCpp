#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

//void significa que no devuelve nada
//main tienen que devolver algo
main(){
	int numero;
	cout << "Inserta un dia de la semana: \n";
	cin >> numero;
	
	//getch(); captura un caractert sin darle entes
	//getline(); captura una linea entera con espacios
	//cout y cin son comandos de c++
	
	switch(numero){
		case 1:
			cout << "Es Lunes";
			break;
		case 2:
			cout << "Es Martes";
			break;
		case 3:
			cout << "Es Miercoles";
			break;
		case 4:
			cout << "Es Jueves";
			break;
		case 5:
			cout << "Es Viernes";
			break;
		case 6:
			cout << "Es Sabado";
			break;
		case 7:
			cout << "Es Domingo";
			break;	
		default:
			cout << "Dia enexistente... ADIOS!!!!";
			break;	
	}
	
}
