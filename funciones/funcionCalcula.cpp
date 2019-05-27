//calcular cuanto valen todas las entradas de nuestros amigos cada entrada vale 6,20
//pedir por teclado cuantos amigos van.
//si todas las personas comen palomitas, y en cada palomita vale 0.002 y en paquete salen
// 324 palomitas, cuanto cuestan 4 paquetes.
#include<string>
#include <time.h>
#include <iostream>
using namespace std;

int cant_amigo = 0;

void calcular() {
	cout << "Ingrese cantidad de amigos: ";
	cin >> cant_amigo;
	cout << "El total de las " << cant_amigo << " entradas es: " << cant_amigo * 6.20 <<"€"<< endl;
}
void palomitas() {
	cout << "Precio total de palomitas: " << cant_amigo * (0.002 * 324) << "€" << endl;
}


int main() {
	setlocale(LC_ALL, "spanish");//para acentso y demas
	calcular();
	palomitas();
	return 0;
}