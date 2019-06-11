// DON SIMON
// EN UNA FUNCION ,CADA VEZ QUE LA LLAMEMOS
// VAMOS A�ADIENDO UN NUMERO ALEATORIO
// DESDE OTRA FUNCION PEDIMOS UN NUMERO AL USUARIO
// Y COMPROBAMOS SI ESTA EN EL OTRO VECTOR
// TIENE QUE COINCIDIR EL NUMERO, ORDEN Y LA CANTIDAD
// SLEEP(100);

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h> //libreria de Sleep()
#include <fstream>

using namespace std;
int alea;
int *simon;
int *jugador;
int contador = 0;
int opcion;
bool acierto = true;
void llamada()
{
	alea = rand() % 10 + 1;
	simon[contador] = alea;
	contador++;
}

void ver_simon()
{
	//guiardamos de uno en uno en fichero
	ofstream escritura;
	escritura.open("simon.txt"); ///,ios:app grabaria solo la ultima entrada

	for (int x = 0; x < contador; x++)
	{
		cout << simon[x];
		Sleep(1000);
		escritura << simon[x] << endl;
		system("cls");
	}

	escritura.close();
	
}
void turno_jugador()
{
	ofstream escrituraJugador;
	escrituraJugador.open("jugador.txt");

	cout << "intro combinacion: " << endl;
	for (int x = 0; x < contador; x++)
	{
		cin >> jugador[x];

		escrituraJugador << jugador[x] << endl;
	}
	escrituraJugador.close();
}
void comprobar()
{
	for (int x = 0; x < contador; x++)
	{
		if (simon[x] != jugador[x])
		{
			acierto = false;
			cout << "LA cagaste BEIBE" << endl;
		}
	}
	if (acierto == true)
	{
		cout << "MUCHO VIEN!! SIGUE JUGANDO" << endl;
	}
	system("pause");
}

void jugar()
{

	do
	{
		llamada();
		ver_simon();
		turno_jugador();
		comprobar();
	} while (acierto == true);
}

void leerPartida(){
	string linea;
	ifstream lectura;
	lectura.open("simon.txt");
	ifstream lecturaJugador;
	lecturaJugador.open("jugador.txt");

	while(getline(lectura,linea)){
		simon[contador] = atoi(linea.c_str());
		getline(lecturaJugador,linea);
		jugador[contador] = atoi(linea.c_str());
		contador++;
	}
		
	lectura.close();
	lecturaJugador.close();
	jugar();	
}

int main()
{
	srand(time(NULL));
	simon = (int *)malloc(100*sizeof(int));
	jugador = (int *)malloc(100*sizeof(int));
	do
	{
		cout << "1.- A juegar......" << endl;
		cout << "2.- Leer partida ..." << endl;
		cout << "intro opcion:";
		cin >> opcion;

		switch (opcion)
		{
			case 1:
			{
				jugar();
				break;
			}
			case 2:
			{
				leerPartida();
				break;
			}
		}

	} while (opcion != 99);
	llamada();
	ver_simon();

	return 0;
}
