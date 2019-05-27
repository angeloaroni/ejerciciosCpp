#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <conio.h>
using namespace std;

char tablero[8][8];
char blanco = 178;
char negro = 177;
int contador = 0;
int comidas1 = 0;
int comidas2 = 0;

// void tabla(){
// 	for(int i=0;i<8;i++){
// 		cout<<endl;
// 		contador--;
// 		//cout<<'\t\t\t  ' ;
// 		for(int j=0;j<8;j++){
// 			contador++;
// 			if(contador%2!=0)
// 			   cout << blanco << blanco << blanco ;
// 			if(contador%2==0)
// 			   cout << negro << negro << negro ;
// 		}
// 	}
// }

void rellenar()
{
	for (int i = 0; i < 8; i++)
	{
		cout << endl;
		for (int j = 0; j < 8; j++)
		{
			//colocamos las fichas en susu posisociones partiendo de 2
			if (i <= 2 && ((j + i) % 2 == 0))
			{
				tablero[i][j] = 'O';
				//cout << tablero[i][x];
			}
			// ESTE IF PONE FICHAS CONTRARIAS CUANDO ARREGLO VALGA
			else if (i >= 5 && ((j + i) % 2 == 0))
			{
				tablero[i][j] = 'X';
				//cout << tablero[i][x];
			}
			else
			{

				tablero[i][j] = ' ';
				//cout << tablero[i][x];
			}
		}
	}
}

void mueveFichas1(int x, int y, int xb, int yb)
{
	//verifica llega de posicion
	cout << "--------------------" << endl;
	cout << "posicion ficha: " << x << " : " << y << endl;
	cout << "nueva posicion ficha: " << xb << " : " << yb << endl;
	cout << "--------------------" << endl;
	//comprobamos que la nueva posicion sea correcta
	if((xb + yb) % 2 == 0){
		if(tablero[x+1][y+1] == 'X' && tablero[x+2][y+2] == ' '){
			cout << "PODRIAS COMER FICHA..." << endl;
			tablero[x+1][y+1] = ' ';
			comidas1++;
			cout << "ficha comida JUG 1 -> " << comidas1 ;
			tablero[xb][yb] = 'O';
			tablero[x][y] = ' ';
		}else{
			tablero[xb][yb] = 'O';
			tablero[x][y] = ' ';
		}	
	}
	
	else
	{
		cout << "MOVIMIENTOS INVALIDO!!" << endl;
		cout << "la fihca no se puede mover a esa posicion..." << endl;
	}
}

void mueveFichas2(int x, int y, int xb, int yb)
{
	//verifica llega de posicion
	cout << "--------------------" << endl;
	cout << "posicion ficha: " << x << " : " << y << endl;
	cout << "nueva posicion ficha: " << xb << " : " << yb << endl;
	cout << "--------------------" << endl;
	//comprobamos que la nueva posicion sea correcta
	if((xb + yb) % 2 == 0){
		if(tablero[x-1][y-1] == 'O' && tablero[x-2][y-2] == ' '){
			cout << "PODRIAS COMER FICHA..." << endl;
			tablero[x-1][y-1] = ' ';
			comidas2++;
			cout << "ficha comida JUG 2 -> " << comidas2 ;
			tablero[xb][yb] = 'X';
			tablero[x][y] = ' ';
		}else{
			tablero[xb][yb] = 'X';
			tablero[x][y] = ' ';
		}	
	}
	else
	{
		cout << "MOVIMIENTOS INVALIDO!!" << endl;
		cout << "la fihca no se puede mover a esa posicion..." << endl;
	}
}

void imprimir()
{
	cout << endl;
	cout << endl;
	//INICIO DEL FOR Z QUE SIRVE PARA INDICAR LAS CORDENADAS HORIZONTALES X
	for (int z = 0; z < 8; z++)
	{
		cout << "  " << z;
	}
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << i << " "; //ESTA I SIRVE PARA INDICAR COORDENADAS VERTICALES Y
		for (int j = 0; j < 8; j++)
		{
			if ((tablero[i][j] == 'X' || tablero[i][j] == 'O') && ((j + i) % 2 == 0))
			{
				cout << blanco << tablero[i][j] << blanco;
			}
			else if (tablero[i][j] == ' ' && (j + i) % 2 != 0)
			{
				cout << negro << negro << negro;
			}
			else if (tablero[i][j] == ' ' && (j + i) % 2 == 0)
			{
				cout << blanco << blanco << blanco;
			}
		}
		cout << endl;
	}
}

void jugadores()
{
}

int main(int argc, char const *argv[])
{
	int x, y;
	int xb, yb;
	int movimientos = 0;
	string mensaje;

	rellenar();
	cout << "-------------JUEGO DE DAMAS---------------" << endl;
	imprimir();

	cout << endl;
	cout << "Jugador 1 --> O: " << endl;
	cout << "Jugador 2 --> X: " << endl;

	do
	{
		//movimiento jugador 1
		cout << endl;
		cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO" << endl;
		cout << "JUGADOR 1 elija ficha" << endl;
		cout << "Introuduce coordenada X: ";
		cin >> x;
		cout << "Introuduce coordenada Y: ";
		cin >> y;

		if (tablero[x][y] == 'O')
		{
			//cout<<blanco<<tablero[x][y]<<blanco;
			cout << "Si existe ficha " << endl;
			cout << "Introdusca nueva posicion de la ficha " << endl;
			cout << "Introuduce coordenada X: ";
			cin >> xb;
			cout << "Introuduce coordenada Y: ";
			cin >> yb;

			mueveFichas1(x, y, xb, yb);
			imprimir();
		}
		else
			cout << "No existe ficha en esa posicion...";

		//movimiento jugador 2
		cout << endl;
		cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
		cout << "JUGADOR 2 elija ficha" << endl;
		cout << "Introuduce coordenada X: ";
		cin >> x;
		cout << "Introuduce coordenada Y: ";
		cin >> y;

		if (tablero[x][y] == 'X')
		{
			//cout<<blanco<<tablero[x][y]<<blanco;
			cout << "Si existe ficha " << endl;
			cout << "Introdusca nueva posicion de la ficha " << endl;
			cout << "Introuduce coordenada X: ";
			cin >> xb;
			cout << "Introuduce coordenada Y: ";
			cin >> yb;

			mueveFichas2(x, y, xb, yb);
			imprimir();
		}
		else
			cout << "No existe ficha en esa posicion...";

		movimientos++;

	} while (movimientos != 8);

	return 0;
}
