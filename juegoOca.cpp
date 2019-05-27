// JUEGO DE LA OCA de tio gilito, jugamos con un dado de 6 caras
//
// 60 casillas
// 0 = salida
// 1 = doble tirada
// 2 = sube 3 casillas
// 3 = sube 5 casillas 
// 4 = baja 4 casillas
// 5 = "pierdes turno"
// 6 = acumula 100 monedas
// 7 = pierde 75 monedas
// 8 = vuelve a la primera casilla
// 9 = ves a la casilla 40
// 10 = ves a la casilla 50
// 11 = tira otra vez, tirada doble
// 60 = casilla final, gana
#include<string>
#include <time.h>
#include <iostream>
using namespace std;

int main() {
	string tablero[60];
	int dado;
	int posicion = 0;
	int monedas = 0;
	//int turno = 1;
	
	srand(time(NULL));
	
	do{
		cout << "Pulsa para tirar dado...." << endl;
		dado = rand() % 6 + 1;
		cout << "Has sacado un... " << dado << endl;
		posicion = posicion + dado;// avanza posicion

		/*for (int i = 0; i < 60; i++) {
			tablero[i] = "-";
			tablero[posicion] = "X";
   			cout << tablero[i];
		}
		cout << endl;*/
		for (int i = 0; i < 60; i++) {
			if (posicion == i)
				cout << "Z";
			else
				cout << "-";
		}
		switch (posicion)
		{
			// 1 = doble tirada
		case 1:
		case 11:
		case 21:
		case 31:
		case 41:
		case 51: {
			dado = rand() % 6 + 1;
			cout << "\nHas sacado un... " << dado << endl;
			posicion = posicion + dado;
			cout << "\nEstas en la posicion: " << posicion << endl;
			system("pause");
			break;
		}
				 // 2 = sube 3 casillas
		case 2:
		case 12:
		case 22:
		case 32:
		case 42:
		case 52: {			
			posicion = posicion + 3;
			cout << "\navanzas 3" << endl;			
			cout << "\nEstas en la posicion: " << posicion << endl;
			system("pause");
			break;
		}
				 // 3 = sube 5 casillas 
		case 3:
		case 13:
		case 23:
		case 33:
		case 43:
		case 53: {			
			posicion = posicion + 5;
			cout << "\navanza 5 posiciones" << endl;			
			cout << "\nEstas en la posicion: " << posicion << endl;
			system("pause");
			break;
		}
		// 4 = baja 4 casillas
		case 4:
		case 14:
		case 24:
		case 34:
		case 44:
		case 54: {			
			posicion = posicion - 4;
			cout << "\nbajas 5 posiciones" << endl;
			cout << "\nEstas en la posicion: " << posicion << endl;
			system("pause");
			break;
		}
		// 5 = "pierdes turno"
		case 5:
		case 15:
		case 25:
		case 35:
		case 45:
		case 55: {			
			posicion = posicion;
			cout << "\npierdes un turno" << endl;
			cout << "\nEstas en la posicion: " << posicion << endl;
			system("pause");
			break;

		}
		// 6 = acumula 100 monedas
		case 6:
		case 16:
		case 26:
		case 36:
		case 46:
		case 56: {					
			monedas = monedas + 100;
			posicion = posicion;
			cout << "\nacumulas 100 monedas" << endl;
			cout << "\nEstas en la posicion: " << posicion << endl;
			cout << "Tienes: " << monedas << endl;
			system("pause");

			break;
		}
		// 7 = pierde 75 monedas
		case 7:
		case 17:
		case 28:
		case 38:
		case 48:
		case 58: {						
			posicion = posicion;
			monedas = monedas - 75;
			cout << "\npierdes 75 monedas" << endl;
			cout << "\nEstas en la posicion: " << posicion << endl;
			cout << "Tienes: " << monedas << endl;
			system("pause");

			break;
		}
			
		default:
			break;
		}
		

	} while (posicion<60);

}