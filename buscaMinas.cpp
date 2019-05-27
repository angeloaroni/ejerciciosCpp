#include<string>
#include <time.h>
#include <iostream>
using namespace std;
int main() {
	string tablero[10][10];
	int num1;
	int num2;
	int cord_x;
	int cord_y;
	bool acierto = false;
	int resul = 0;
	int intentos = 0;

	srand(time(NULL));	
	for (int i = 0; i < 5; i++){
		num1 = rand() % 10;
		num2 = rand() % 10;
		tablero[num1][num2] = "X";	
		cout << num1 << ":" << num2 << endl;
	}

	//buscar
	do{
		cout << "Ingresa cordenada X: ";
		cin >> cord_x;
		cout << "Ingresa cordenada y: ";
		cin >> cord_y;
		if (tablero[cord_x][cord_y] == "X") {
			intentos++;
			//acierto = true;
			resul++;
			cout << "BOMM " << endl;
		}
		else {
			intentos++;
			//acierto = false;
			cout << "Sigue buscando " << endl;
		}
		
	} while (intentos<5);
	//pintar
	for (int i = 0; i < 10; i++) {
		cout << i;
		for (int x = 0; x < 10; x++)
		{
			cout << tablero[i][x] << "_ ";
		}
		cout << endl;
	}

	cout << "Maximo de intentos superados " << endl;
	cout << "Has encontrado " << resul << " minas" << endl;
	
}
